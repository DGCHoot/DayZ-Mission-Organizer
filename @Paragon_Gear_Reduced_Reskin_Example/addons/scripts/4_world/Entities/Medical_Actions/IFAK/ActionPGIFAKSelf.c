class ActionPGIFAKSelfCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);
	}
};

class ActionPGIFAKSelf: ActionContinuousBase
{
	void ActionPGIFAKSelf()
	{
		m_CallbackClass = ActionPGIFAKSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_BANDAGE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}

	string GetText()
	{
		return "Use IFAK On Self";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		ItemBase usedItem = action_data.m_MainItem;

		// Checks to see if a players health is below listed value
		//(if its below said value it gives the option to use the item)
		if (action_data.m_Player.GetHealth("GlobalHealth", "Health") <95);

		// Adds listed health to the player upon compleation of the action
		action_data.m_Player.AddHealth("GlobalHealth", "Health", 25);
		if ( usedItem.HasQuantity() )
		{
			if ( usedItem.GetQuantity() > 1 )
			{
				int qnt = usedItem.GetQuantity();
				qnt -= usedItem.GetQuantityMax() * 0.25;
				usedItem.SetQuantity( qnt );
			}
			else
			usedItem.Delete();
		}
	}
};
