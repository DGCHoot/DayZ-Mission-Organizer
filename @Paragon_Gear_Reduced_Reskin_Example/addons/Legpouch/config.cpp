class CfgPatches
{
	class Example_Adjust_Legpouch
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
	class Large_Pouches_ColorBase: Clothing
	{
		scope=0; //  Scope 0 means it does not make it viewable period. 1 is in game 2 and globally viewable.
		model="ParagonGearREDUCED\Leg_Pouches\Large_Pouches\Large_Pouches_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Hips";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		descriptionShort="Large Leg Pouches for extra inventory hold 20 slots";
		weight=800;
		itemSize[]={3,3}; // Takes up 9 squares. 3x3
		quickBarBonus=4;
		heatIsolation=0.40000001; // Insulation 40%
		itemsCargoSize[]={5,4}; // Holds 20 Slots. 5x4
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo01",
			"Camo02"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Leg_Pouches\Large_Pouches\Large_Pouches_m.p3d";
			female="ParagonGearREDUCED\Leg_Pouches\Large_Pouches\Large_Pouches_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=135;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_damage.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_damage.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_destruct.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_destruct.rvmat"
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
	class Medium_Pouches_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Leg_Pouches\Medium_Pouches\Medium_Pouches_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Hips";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		descriptionShort="Medium Leg Pouches for extra inventory hold 15 slots";
		weight=800;
		itemSize[]={3,3};
		quickBarBonus=4;
		heatIsolation=0.40000001;
		itemsCargoSize[]={5,3};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo01",
			"Camo02"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Leg_Pouches\Medium_Pouches\Medium_Pouches_m.p3d";
			female="ParagonGearREDUCED\Leg_Pouches\Medium_Pouches\Medium_Pouches_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=135;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_damage.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_damage.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_destruct.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_destruct.rvmat"
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
	class Small_Pouches_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Leg_Pouches\Small_Pouches\Small_Pouches_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Hips";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		descriptionShort="Small Leg Pouches for extra inventory hold 10 slots";
		weight=800;
		itemSize[]={3,3};
		quickBarBonus=4;
		heatIsolation=0.40000001;
		itemsCargoSize[]={5,2};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo01",
			"Camo02"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Leg_Pouches\Small_Pouches\Small_Pouches_m.p3d";
			female="ParagonGearREDUCED\Leg_Pouches\Small_Pouches\Small_Pouches_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=135;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_damage.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_damage.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Leg_Pouches\data\Legs_destruct.rvmat",
								"ParagonGearREDUCED\Leg_Pouches\data\Pouches_destruct.rvmat"
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
