class CfgPatches
{
	class Example_Adjust_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Scripts",
			"DZ_Characters",
			"Paragon_Gear_Reduced",
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Patch_ColorBase: Clothing_Base
	{
		scope=0;
		model="ParagonGearREDUCED\Attachments\Patch\Patch.p3d";
		inventorySlot[]=
		{
			"Patch"
		};
		weight=100;
		itemSize[]={2,1};
		itemsCargoSize[]={};
		hiddenSelections[]=
		{
			"Camo"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Attachments\Patch\data\Patch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Attachments\Patch\data\Patch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Attachments\Patch\data\Patch.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Attachments\Patch\data\Patch.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Attachments\Patch\data\Patch.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="SmershVest_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SmershVest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
// 	class Insanitii_Example : MapPouch_ColorBase
// 	{
//   	scope=2;
//	 	displayName="Example Small Pouch";
//   	hiddenSelectionsTextures[]=
//		{
//			"Example_Adjust\Legpouch\textures\Legs_Black_Small_Example.paa",
//			"Example_Adjust\Legpouch\textures\Pouches_Black_Example.paa"
//		};
//	};
};
