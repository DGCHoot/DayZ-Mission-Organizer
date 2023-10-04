class CfgPatches
{
	class Example_Adjust_Hats
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
	class Mich2001Helmet;
	class Clothing: Clothing_Base
	{
	};
	class Altyn_Helmet_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Altyn\Altyn_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Altyn Helmet has 82% damage reduction";
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
			male="ParagonGearREDUCED\Altyn\Altyn_m.p3d";
			female="ParagonGearREDUCED\Altyn\Altyn_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Altyn\data\Altyn.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Altyn\data\Altyn.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Altyn\data\Altyn_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Altyn\data\Altyn_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Altyn\data\Altyn_destruct.rvmat"
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
		class Armored_Helmet_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\Armored_Helmet\Armored_Helmet_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Armored Helmet has 79% damage reduction";
		weight=4000;
		itemSize[]={3,3};
		heatIsolation=0.80000001;
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={8};
		repairCosts[]={20};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Armored_Helmet\Armored_Helmet_m.p3d";
			female="ParagonGearREDUCED\Armored_Helmet\Armored_Helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=140;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Armored_Helmet\data\Armored_Helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Armored_Helmet\data\Armored_Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Armored_Helmet\data\Armored_Helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Armored_Helmet\data\Armored_Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Armored_Helmet\data\Armored_Helmet_destruct.rvmat"
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
						damage=0.20999999;
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
						damage=0.20999999;
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
						damage=0.20999999;
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
						damage=0.43000001;
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
		class Combat_Helmet_ColorBase: Mich2001Helmet
	{
		scope=0;
		model="ParagonGearREDUCED\Combat_Helmet\Combat_Helmet_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Combat Helmet has 76% damage reduction";
		weight=3500;
		itemSize[]={3,3};
		heatIsolation=0.60000002;
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={8};
		repairCosts[]={20};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Combat_Helmet\Combat_Helmet_m.p3d";
			female="ParagonGearREDUCED\Combat_Helmet\Combat_Helmet_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=350;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Combat_Helmet\data\Combat_Helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Combat_Helmet\data\Combat_Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Combat_Helmet\data\Combat_Helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Combat_Helmet\data\Combat_Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Combat_Helmet\data\Combat_Helmet_destruct.rvmat"
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
						damage=0.23999999;
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
						damage=0.23999999;
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
						damage=0.23999999;
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
		class Mando_ColorBase: Mich2001Helmet
	{
		scope=0;
		model="ParagonGearREDUCED\Mando\Mando_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Mando Helmet has 70% damage reduction";
		weight=1500;
		itemSize[]={3,3};
		heatIsolation=0.60000002;
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={8};
		repairCosts[]={20};
		hiddenSelections[]=
		{
			"Camo",
			"Glass"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Mando\Mando_m.p3d";
			female="ParagonGearREDUCED\Mando\Mando_m.p3d";
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
								"ParagonGearREDUCED\Mando\data\Mando.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Mando\data\Mando.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Mando\data\Mando_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Mando\data\Mando_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Mando\data\Mando_destruct.rvmat"
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
						damage=0.55000001;
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
		class Scifi_Helmet_ColorBase: Mich2001Helmet
	{
		scope=0;
		model="ParagonGearREDUCED\Scifi_Helmet\Scifi_Helmet_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Scifi Helmet has 77% damage reduction";
		weight=3500;
		itemSize[]={3,3};
		heatIsolation=0.60000002;
		attachments[]=
		{
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={8};
		repairCosts[]={20};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Scifi_Helmet\Scifi_Helmet_m.p3d";
			female="ParagonGearREDUCED\Scifi_Helmet\Scifi_Helmet_m.p3d";
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
								"ParagonGearREDUCED\Scifi_Helmet\data\Scifi_Helmet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Scifi_Helmet\data\Scifi_Helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Scifi_Helmet\data\Scifi_Helmet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Scifi_Helmet\data\Scifi_Helmet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Scifi_Helmet\data\Scifi_Helmet_destruct.rvmat"
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
						damage=0.23;
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
						damage=0.23;
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
						damage=0.23;
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
		class Tactical_Helmet_ColorBase: Mich2001Helmet
	{
		scope=0;
		model="ParagonGearREDUCED\Tactical_Helmet\TacHelm_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Headgear";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		descriptionShort="The Tactical Helmet has 67% damage reduction";
		weight=3000;
		itemSize[]={3,3};
		heatIsolation=0.60000002;
		attachments[]=
		{
			"Visor",
			"Mandible",
			"EarCovers",
			"HeadPhones",
			"NVG",
			"helmetFlashlight"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={8};
		repairCosts[]={20};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\Tactical_Helmet\TacHelm_m.p3d";
			female="ParagonGearREDUCED\Tactical_Helmet\TacHelm_m.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ParagonGearREDUCED\Tactical_Helmet\data\Tac_Helm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\Tactical_Helmet\data\Tac_Helm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\Tactical_Helmet\data\Tac_Helm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\Tactical_Helmet\data\Tac_Helm_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\Tactical_Helmet\data\Tac_Helm_destruct.rvmat"
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
						damage=0.55000001;
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
