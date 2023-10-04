class CfgPatches
{
	class Example_Adjust_MapPouch
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
	class MapPouch_ColorBase: Container_Base
	{
		scope=0;
		model="ParagonGearREDUCED\Pouches\MapPouch\MapPouch.p3d";
		inventorySlot[]=
		{
			"MapPouch",
			"MapPouch2"
		};
		descriptionShort="A small pouch can be attached to armors and belts has a storage size of 3x2";
		weight=200;
		itemSize[]={2,2};
		itemsCargoSize[]={3,2};
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
								"ParagonGearREDUCED\Pouches\MapPouch\data\MapPouch.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Pouches\MapPouch\data\MapPouch.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Pouches\MapPouch\data\MapPouch.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Pouches\MapPouch\data\MapPouch.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Pouches\MapPouch\data\MapPouch.rvmat"
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
