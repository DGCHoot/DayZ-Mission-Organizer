class CfgPatches
{
	class Example_Adjust_Glasses
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
	class TacticalGoggles;
	class Clothing: Clothing_Base
	{
	};
	class Maska_Helmet_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Maska\Maska_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Maska Helmet has 75% damage reduction";
		weight=5000;
		itemSize[]={3,3};
		heatIsolation=0.60000002;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={8};
		repairCosts[]={20};
		hiddenSelections[]=
		{
			"Camo01",
			"Camo02"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Maska\Maska_m.p3d";
			female="ParagonGearREDUCED\Maska\Maska_f.p3d";
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
								"ParagonGearREDUCED\Maska\data\Maska.rvmat",
								"ParagonGearREDUCED\Maska\data\Maska_Mask.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Maska\data\Maska.rvmat",
								"ParagonGearREDUCED\Maska\data\Maska_Mask.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Maska\data\Maska_damage.rvmat",
								"ParagonGearREDUCED\Maska\data\Maska_Mask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Maska\data\Maska_damage.rvmat",
								"ParagonGearREDUCED\Maska\data\Maska_Mask_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Maska\data\Maska_destruct.rvmat",
								"ParagonGearREDUCED\Maska\data\Maska_Mask_destruct.rvmat"
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
						damage=0.25;
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
						damage=0.25;
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
						damage=0.25;
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
						damage=0.5;
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
		class Goggles_ColorBase: TacticalGoggles
	{
		scope=0;
		model="ParagonGearREDUCED\Goggles\Goggles_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Eyewear";
		itemInfo[]=
		{
			"Clothing",
			"Eyewear"
		};
		descriptionShort="Military Goggles made to stop sun rays";
		weight=20;
		itemSize[]={2,1};
		hiddenSelections[]=
		{
			"Camo",
			"Glass"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Goggles\Goggles_m.p3d";
			female="ParagonGearREDUCED\Goggles\Goggles_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Goggles\data\Goggles.rvmat",
								"ParagonGearREDUCED\Goggles\data\Glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Goggles\data\Goggles.rvmat",
								"ParagonGearREDUCED\Goggles\data\Glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Goggles\data\Goggles.rvmat",
								"ParagonGearREDUCED\Goggles\data\Glass.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Goggles\data\Goggles.rvmat",
								"ParagonGearREDUCED\Goggles\data\Glass.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Goggles\data\Goggles.rvmat",
								"ParagonGearREDUCED\Goggles\data\Glass.rvmat"
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
					soundSet="SportGlasses_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SportGlasses_drop_SoundSet";
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
