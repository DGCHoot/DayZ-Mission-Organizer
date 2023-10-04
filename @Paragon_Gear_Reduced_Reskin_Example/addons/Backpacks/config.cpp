class CfgPatches
{
	class Example_Adjust_Backpacks
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
	class Container_Base;
	class Clothing: Clothing_Base
	{
	};
	class Compact_Bag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Compact_Bag\Compact_Bag_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The Compact Backpack hold 2 gun and has 60 slots of storage";
		weight=3000;
		itemSize[]={4,6};
		quickBarBonus=5;
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,6};
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Compact_Bag\Compact_Bag_m.p3d";
			female="ParagonGearREDUCED\Compact_Bag\Compact_Bag_m.p3d";
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
								"ParagonGearREDUCED\Compact_Bag\data\Compact_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Compact_Bag\data\Compact_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Compact_Bag\data\Compact_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Compact_Bag\data\Compact_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Compact_Bag\data\Compact_Bag_destruct.rvmat"
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
	class Deployment_Bag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Deployment_Bag\Deployment_Bag_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The Deployment Backpack hold 2 gun and has 110 slots of storage";
		weight=7000;
		itemSize[]={5,6};
		quickBarBonus=5;
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,10};
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Deployment_Bag\Deployment_Bag_m.p3d";
			female="ParagonGearREDUCED\Deployment_Bag\Deployment_Bag_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Deployment_Bag\data\Deployment_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Deployment_Bag\data\Deployment_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Deployment_Bag\data\Deployment_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Deployment_Bag\data\Deployment_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Deployment_Bag\data\Deployment_Bag_destruct.rvmat"
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
		class Duffle_Bag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Duffle_Bag\Duffle_Bag_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The Duffle Bag hold 2 gun and has 110 slots of storage";
		weight=4000;
		itemSize[]={6,4};
		quickBarBonus=5;
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,11};
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Duffle_Bag\Duffle_Bag_f.p3d";
			female="ParagonGearREDUCED\Duffle_Bag\Duffle_Bag_m.p3d";
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
								"ParagonGearREDUCED\Duffle_Bag\data\Duffle_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Duffle_Bag\data\Duffle_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Duffle_Bag\data\Duffle_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Duffle_Bag\data\Duffle_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Duffle_Bag\data\Duffle_Bag_destruct.rvmat"
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
		class Clothing_Base;
	class Container_Base;
	class Clothing: Clothing_Base
	{
	};
	class GunBag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\GunBag\GunBag_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The Gun Backpack hold 2 gun and has 140 slots of storage";
		weight=9000;
		itemSize[]={4,8};
		quickBarBonus=5;
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,14};
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\GunBag\GunBag_m.p3d";
			female="ParagonGearREDUCED\GunBag\GunBag_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag_destruct.rvmat"
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
		class GunSling_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\GunSling\GunSling_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Armband";
		itemInfo[]=
		{
			"Clothing",
			"Armband"
		};
		descriptionShort="A gun sling that holds a extra gun";
		weight=400;
		itemSize[]={10,3};
		quickBarBonus=4;
		heatIsolation=0.40000001;
		attachments[]=
		{
			"Melee"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\GunSling\GunSling_m.p3d";
			female="ParagonGearREDUCED\GunSling\GunSling_m.p3d";
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
								"ParagonGearREDUCED\GunBag\data\GunBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\GunBag\data\GunBag_destruct.rvmat"
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
		class RaidBag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\RaidBag\RaidBag_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The Raid Bag hold 2 gun and has 200 slots of storage";
		weight=11000;
		itemSize[]={5,8};
		quickBarBonus=5;
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,20};
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\RaidBag\RaidBag_m.p3d";
			female="ParagonGearREDUCED\RaidBag\RaidBag_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=180;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\RaidBag\data\RaidBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\RaidBag\data\RaidBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\RaidBag\data\RaidBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\RaidBag\data\RaidBag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\RaidBag\data\RaidBag_destruct.rvmat"
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
	class Rush_24_Bag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Rush_24_Bag\Rush_24_Bag_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The Rush 24 Backpack 60 slots of storage";
		weight=5000;
		itemSize[]={4,5};
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,6};
		attachments[]=
		{
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Rush_24_Bag\Rush_24_Bag_m.p3d";
			female="ParagonGearREDUCED\Rush_24_Bag\Rush_24_Bag_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=90;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Rush_24_Bag\data\Rush_24_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Rush_24_Bag\data\Rush_24_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Rush_24_Bag\data\Rush_24_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Rush_24_Bag\data\Rush_24_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Rush_24_Bag\data\Rush_24_Bag_destruct.rvmat"
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
		class Tactical_Bag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Tactical_Bag\Tactical_Bag_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The Tactical Backpack hold 2 gun and has 90 slots of storage";
		weight=6000;
		itemSize[]={4,7};
		quickBarBonus=5;
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,9};
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Tactical_Bag\Tactical_Bag_m.p3d";
			female="ParagonGearREDUCED\Tactical_Bag\Tactical_Bag_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=110;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Tactical_Bag\data\Tactical_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Tactical_Bag\data\Tactical_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Tactical_Bag\data\Tactical_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Tactical_Bag\data\Tactical_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Tactical_Bag\data\Tactical_Bag_destruct.rvmat"
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
	class US_Military_Bag_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\US_Military_Bag\US_Military_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Back";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		descriptionShort="The US Military Backpack hold 2 gun and has 130 slots of storage";
		weight=8000;
		itemSize[]={5,8};
		quickBarBonus=5;
		heatIsolation=0.40000001;
		itemsCargoSize[]={10,13};
		attachments[]=
		{
			"Melee",
			"Shoulder",
			"Patch"
		};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		simpleHiddenSelections[]=
		{
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\US_Military_Bag\US_Military_m.p3d";
			female="ParagonGearREDUCED\US_Military_Bag\US_Military_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=130;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\US_Military_Bag\data\US_Military_Bag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\US_Military_Bag\data\US_Military_Bag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\US_Military_Bag\data\US_Military_Bag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\US_Military_Bag\data\US_Military_Bag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\US_Military_Bag\data\US_Military_Bag_destruct.rvmat"
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
