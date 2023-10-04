class ActionPGIFAKTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);
	}
};

class ActionPGIFAKTarget: ActionContinuousBase
{
	void ActionPGIFAKTarget()
	{
		m_CallbackClass = ActionPGIFAKTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_BANDAGETARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
	}

	override void CreateConditionComponents()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}

	override bool HasTarget()
	{
		return true;
	}

	string GetText()
	{
		return "Use IFAK On Target";
	}

	override void OnFinishProgressServer( ActionData action_data )
	{
		PlayerBase ntarget = PlayerBase.Cast( action_data.m_Target.GetObject() );
		ItemBase usedItem = action_data.m_MainItem;

		if(action_data.m_MainItem && ntarget)
		{

			// Checks to see if a players health is below listed value
			//(if its below said value it gives the option to use the item)
			if (ntarget.GetHealth("GlobalHealth", "Health") <95);

			ntarget.AddHealth("GlobalHealth", "Health", 25);

			if ( usedItem.HasQuantity() )
			{
				if ( usedItem.GetQuantity() > 1 )
				{
					int qnt = usedItem.GetQuantity();
					qnt -= 1;
					usedItem.SetQuantity( qnt );
				}
				else
				usedItem.Delete();
			}
		}
	}
};
