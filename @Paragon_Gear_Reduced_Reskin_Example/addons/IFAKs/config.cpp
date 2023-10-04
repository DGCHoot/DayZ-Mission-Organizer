class CfgPatches
{
	class Example_Adjust_IFAK
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
	class Inventory_Base;
	class IFAK_ColorBase: Inventory_Base
	{
		scope=0; //  Scope 0 means it does not make it viewable period. 1 is in game 2 and globally viewable.
		model="ParagonGearREDUCED\Pouches\IFAK\IFAK.p3d";
		inventorySlot[]=
		{
			"IFAK",
			"IFAK2"
		};
		weight=80;
		itemSize[]={2,2}; // Takes up 4 squares.
		varQuantityInit=4;
		varQuantityMin=0;
		varQuantityMax=4;
		quantityBar=1;
		varQuantityDestroyOnMin=1;
		varCleannessInit=1;
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
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Pouches\IFAK\data\IFAK.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Pouches\IFAK\data\IFAK.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Pouches\IFAK\data\IFAK_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Pouches\IFAK\data\IFAK_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Pouches\IFAK\data\IFAK_destruct.rvmat"
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
// 	class Insanitii_Example : Small_Pouches_ColorBase
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
