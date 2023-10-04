class CfgPatches
{
	class Example_Adjust_Vest
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
	class 6B43_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\6B43Vest\6B43Vest_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The 6B43 has 88% damage reduction";
		weight=12000;
		itemSize[]={5,6};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		attachments[]=
		{
			"ButtPouch",
			"FrontPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"MapPouch2",
			"Patch"
		};
		itemsCargoSize[]={};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\6B43Vest\6B43Vest_f.p3d";
			female="ParagonGearREDUCED\6B43Vest\6B43Vest_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
	class Compact_6B43_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Compact_6B43\Compact_6B43_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The Compact 6B43 has 75% damage reduction";
		weight=12000;
		itemSize[]={4,4};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		attachments[]=
		{
			"ButtPouch",
			"FrontPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"MapPouch2",
			"Patch"
		};
		itemsCargoSize[]={5,5};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Compact_6B43\Compact_6B43_f.p3d";
			female="ParagonGearREDUCED\Compact_6B43\Compact_6B43_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\6B43Vest\data\6B43Vest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.27000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.27000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.27000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.38;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
	class DCS_V2_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\DCS\DCS_V2_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The DCS has 70% damage reduction";
		attachments[]=
		{
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"MapPouch",
			"MapPouch2",
			"Patch"
		};
		weight=8000;
		itemSize[]={5,5};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		itemsCargoSize[]={5,5};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo01",
			"Camo02"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\DCS\DCS_V2_m.p3d";
			female="ParagonGearREDUCED\DCS\DCS_V2_f.p3d";
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
								"ParagonGearREDUCED\DCS\data\Vest.rvmat",
								"ParagonGearREDUCED\DCS\data\Protection.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest.rvmat",
								"ParagonGearREDUCED\DCS\data\Protection.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest_damage.rvmat",
								"ParagonGearREDUCED\DCS\data\Protection_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest_damage.rvmat",
								"ParagonGearREDUCED\DCS\data\Protection_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest_destruct.rvmat",
								"ParagonGearREDUCED\DCS\data\Protection_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
	class DCS_L_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\DCS_L\DCS_L_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The Light DCS has 59% damage reduction";
		attachments[]=
		{
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"Bottle",
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"Patch"
		};
		weight=6000;
		itemSize[]={4,4};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		itemsCargoSize[]={};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo01"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\DCS_L\DCS_L_m.p3d";
			female="ParagonGearREDUCED\DCS_L\DCS_L_m.p3d";
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
								"ParagonGearREDUCED\DCS\data\Vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\DCS\data\Vest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.41;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.41;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.41;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
class IOTV_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\IOTV\IOTV_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The IOTV has 78% damage reduction";
		weight=12000;
		itemSize[]={5,5};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		attachments[]=
		{
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"MapPouch",
			"MapPouch2",
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
			male="ParagonGearREDUCED\IOTV\IOTV_m.p3d";
			female="ParagonGearREDUCED\IOTV\IOTV_m.p3d";
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
								"ParagonGearREDUCED\IOTV\data\IOTV.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\IOTV\data\IOTV.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\IOTV\data\IOTV_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\IOTV\data\IOTV_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\IOTV\data\IOTV_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.22;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.22;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.22;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
		class JPC_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\JPC\JPC_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The JPC Vest has 55% damage reduction";
		attachments[]=
		{
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"Bottle",
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"Patch"
		};
		weight=3500;
		itemSize[]={4,4};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\JPC\JPC_m.p3d";
			female="ParagonGearREDUCED\JPC\JPC_m.p3d";
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
								"ParagonGearREDUCED\JPC\data\JPC.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\JPC\data\JPC.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\JPC\data\JPC_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\JPC\data\JPC_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\JPC\data\JPC_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.44999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.44999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.44999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
		class Killa_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Killa\Killa_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Killa Helmet has 88% damage reduction";
		weight=5300;
		itemSize[]={3,3};
		heatIsolation=0.60000002;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={8};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Killa\Killa_m.p3d";
			female="ParagonGearREDUCED\Killa\Killa_m.p3d";
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
								"ParagonGearREDUCED\Killa\data\Killa.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Killa\data\Killa.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Killa\data\Killa_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Killa\data\Killa_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Killa\data\Killa_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Slick_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Slick\Slick_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The Slick Vest has a 82% damage reduction";
		attachments[]=
		{
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"MapPouch2",
			"Patch"
		};
		weight=3500;
		itemSize[]={4,4};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Slick\Slick_m.p3d";
			female="ParagonGearREDUCED\Slick\Slick_m.p3d";
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
								"ParagonGearREDUCED\Slick\data\Slick.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Slick\data\Slick.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Slick\data\Slick_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Slick\data\Slick_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Slick\data\Slick_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.18000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.18000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.18000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
		class Soviet_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Soviet\Soviet_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The Soviet Vest has 67% damage reduction";
		attachments[]=
		{
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"MapPouch2",
			"Patch"
		};
		weight=3500;
		itemSize[]={5,4};
		quickBarBonus=4;
		heatIsolation=0.80000001;
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Soviet\Soviet_m.p3d";
			female="ParagonGearREDUCED\Soviet\Soviet_f.p3d";
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
								"ParagonGearREDUCED\Soviet\data\Soviet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Soviet\data\Soviet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Soviet\data\Soviet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Soviet\data\Soviet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Soviet\data\Soviet_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.33000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.33000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.33000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
		class TacTec_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\TacTec\TacTec_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		attachments[]=
		{
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"Bottle",
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"Patch"
		};
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The Tac Tec has 63% damage reduction";
		weight=5000;
		itemSize[]={4,4};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		itemsCargoSize[]={};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\TacTec\TacTec_m.p3d";
			female="ParagonGearREDUCED\TacTec\TacTec_m.p3d";
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
								"ParagonGearREDUCED\TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\TacTec\data\TacTec_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.37;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.37;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.37;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.40000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
	class TacticalVest_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\TacticalVest\TacticalVest_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The Tactical Vest has a 83% damage reduction";
		attachments[]=
		{
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"MapPouch2",
			"Patch"
		};
		weight=3500;
		itemSize[]={4,4};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\TacticalVest\TacticalVest_m.p3d";
			female="ParagonGearREDUCED\TacticalVest\TacticalVest_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\TacticalVest\data\TacticalVest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\TacticalVest\data\TacticalVest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\TacticalVest\data\TacticalVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\TacticalVest\data\TacticalVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\TacticalVest\data\TacticalVest_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.17;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.17;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.17;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
		class 6B13_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\6B13\6B13_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Vest";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		descriptionShort="The 6B13 Vest has 85% damage reduction, Manufactured by Paragon";
		attachments[]=
		{
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MapPouch",
			"MapPouch2",
			"Patch"
		};
		weight=3500;
		itemSize[]={4,5};
		quickBarBonus=3;
		heatIsolation=0.80000001;
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\6B13\6B13_m.p3d";
			female="ParagonGearREDUCED\6B13\6B13_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\6B13\data\6B13.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\6B13\data\6B13.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\6B13\data\6B13_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\6B13\data\6B13_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\6B13\data\6B13_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.15000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.15000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.15000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.2;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
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
