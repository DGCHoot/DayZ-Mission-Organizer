class CfgPatches
{
	class Example_Adjust_Shoes
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
	class TacticalBoots_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\TacticalBoots\Boots_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Feet";
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		descriptionShort="Tactical Boots";
		weight=800;
		itemSize[]={2,2};
		quickBarBonus=0;
		heatIsolation=1;
		itemsCargoSize[]={};
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\TacticalBoots\Boots_m.p3d";
			female="ParagonGearREDUCED\TacticalBoots\Boots_f.p3d";
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
								"ParagonGearREDUCED\TacticalBoots\data\TacticalBoots.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\TacticalBoots\data\TacticalBoots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\TacticalBoots\data\TacticalBoots_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\TacticalBoots\data\TacticalBoots_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\TacticalBoots\data\TacticalBoots_destruct.rvmat"
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
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
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
