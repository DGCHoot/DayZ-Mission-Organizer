class CfgPatches
{
	class Example_Adjust_BackPouch
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
	class BackPouch_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonGearREDUCED\Pouches\BackPouch\BackPouch.p3d";
		inventorySlot[]=
		{
			"BackPouch"
		};
		descriptionShort="A large pouch made for armors and belts has a storage size of 7x2";
		weight=200;
		itemSize[]={3,3}; // Occupies 9 Squares
		itemsCargoSize[]={7,2}; // Holds 14.
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
								"ParagonGearREDUCED\Pouches\BackPouch\data\BackPouch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Pouches\BackPouch\data\BackPouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Pouches\BackPouch\data\BackPouch_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Pouches\BackPouch\data\BackPouch_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Pouches\BackPouch\data\BackPouch_destruct.rvmat"
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
