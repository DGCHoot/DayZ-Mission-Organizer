class CfgPatches
{
	class Example_Adjust_ButtPouch
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
	class Container_Base;
	class Paragon_ButtPouch_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonGearREDUCED\Pouches\ButtPouch\ButtPouch.p3d";
		inventorySlot[]=
		{
			"ButtPouch"
		};
		descriptionShort="A large pouch made for the 6B43 has a storage of 4x3";
		weight=500;
		itemSize[]={3,3}; // Takes up 9 Squares
		itemsCargoSize[]={4,3}; // Holds 12 slots.
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		allowOwnedCargoManipulation=1;
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
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_Pouches.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_Pouches.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_Pouches_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_Pouches_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_Pouches_destruct.rvmat"
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
