class GunSling_ColorBase extends Clothing 
{
	//the SimpleHiddenSelection Script thanks to Cleetus for helping with this part
	override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        if (slot_name == "Melee")
		{
		UpdateWeaponProxyVisibility(item.IsWeapon());
		};
    }

    void UpdateWeaponProxyVisibility(bool boo)  //Melee slot
    {
        SetSimpleHiddenSelectionState(0, boo);
        SetSimpleHiddenSelectionState(1, !boo);
    }
};
class Paragon_GunSling_Black extends GunSling_ColorBase {};
class Paragon_GunSling_Blue extends GunSling_ColorBase {};
class Paragon_GunSling_Desert extends GunSling_ColorBase {};
class Paragon_GunSling_Green extends GunSling_ColorBase {};