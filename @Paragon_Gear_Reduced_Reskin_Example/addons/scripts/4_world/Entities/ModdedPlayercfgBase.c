modded class ModItemRegisterCallbacks
{
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("KATT_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_1h_pipe.asi", pBehavior,				"dz/anims/anm/player/ik/gear/Hatchet.anm"); 
		pType.AddItemInHandsProfileIK("TacticalPants_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 						"dz/anims/anm/player/ik/camping/fabric.anm");
	};	
};