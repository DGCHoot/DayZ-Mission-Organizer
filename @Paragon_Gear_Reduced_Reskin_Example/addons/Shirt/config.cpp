class CfgPatches
{
	class Example_Adjust_Shirt
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
	class Clothing: Clothing_Base
	{
	};
	class TacticalJacket_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\TacticalJacket\TacticalJacket_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		descriptionShort="Tactical Jacket that has 20 inventory slots";
		weight=800;
		itemSize[]={3,2};
		quickBarBonus=4;
		heatIsolation=1;
		itemsCargoSize[]={5,4};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\TacticalJacket\TacticalJacket_m.p3d";
			female="ParagonGearREDUCED\TacticalJacket\TacticalJacket_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket_destruct.rvmat"
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
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
		class TacticalJacket_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\TacticalJacket\TacticalJacket_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		descriptionShort="Tactical Jacket that has 20 inventory slots";
		weight=800;
		itemSize[]={3,2};
		quickBarBonus=4;
		heatIsolation=1;
		itemsCargoSize[]={5,4};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\TacticalJacket\TacticalJacket_m.p3d";
			female="ParagonGearREDUCED\TacticalJacket\TacticalJacket_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\TacticalJacket\data\TacticalJacket_destruct.rvmat"
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
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
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
