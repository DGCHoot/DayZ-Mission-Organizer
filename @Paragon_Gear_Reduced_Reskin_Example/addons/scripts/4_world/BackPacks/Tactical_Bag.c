class Tactical_Bag_ColorBase extends Clothing 
{
	//the SimpleHiddenSelection Script thanks to Cleetus for helping with this part
	override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        if (slot_name == "Melee") UpdateWeaponProxyVisibility(item.IsWeapon());
		
		if (slot_name == "Shoulder") UpdateRifleProxyVisibility(item.IsMeleeWeapon());
    }

    void UpdateWeaponProxyVisibility(bool boo)  //Melee slot
    {
        SetSimpleHiddenSelectionState(0, boo);
        SetSimpleHiddenSelectionState(1, !boo);
    }
	void UpdateRifleProxyVisibility(bool boo)   //Shoulder slot
    {
		SetSimpleHiddenSelectionState(2, !boo);
        SetSimpleHiddenSelectionState(3, boo);
    }
};
class Paragon_Tactical_Bag_Black extends Tactical_Bag_ColorBase {};
class Paragon_Tactical_Bag_Red extends Tactical_Bag_ColorBase {};
class Paragon_Tactical_Bag_Tan extends Tactical_Bag_ColorBase {};
class Paragon_Tactical_Bag_Blue extends Tactical_Bag_ColorBase {};
class Paragon_Tactical_Bag_Green extends Tactical_Bag_ColorBase {};