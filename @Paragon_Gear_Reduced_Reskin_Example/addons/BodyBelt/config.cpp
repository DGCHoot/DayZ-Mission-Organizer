class CfgPatches
{
	class Example_Adjust_BodyBelt
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
	class BodyBelt_ColorBase: Clothing
	{
		scope=0;
		model="ParagonGearREDUCED\BodyBelt\BodyBelt_g.p3d";
		simulation="clothing";
		vehicleClass="Clothing";
		inventorySlot="Hips";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		descriptionShort="Belt used to attach pouches for extra inventory slots";
		attachments[]=
		{
			"BackPouch",
			"IFAK",
			"IFAK2",
			"MagPouch",
			"MagPouch2",
			"MagPouch3",
			"MapPouch",
			"Epinephrine",
			"Morphine",
			"Epinephrine2"
		};
		weight=800;
		itemSize[]={4,1}; // Takes 4 Squares
		quickBarBonus=4;
		itemsCargoSize[]={4,2}; // Holds 6
		repairableWithKits[]={2,3,5};
		repairCosts[]={25,25,50};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		class ClothingTypes
		{
			male="ParagonGearREDUCED\BodyBelt\BodyBelt_m.p3d";
			female="ParagonGearREDUCED\BodyBelt\BodyBelt_f.p3d";
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
								"ParagonGearREDUCED\BodyBelt\data\BodyBelt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ParagonGearREDUCED\BodyBelt\data\BodyBelt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ParagonGearREDUCED\BodyBelt\data\BodyBelt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ParagonGearREDUCED\BodyBelt\data\BodyBelt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ParagonGearREDUCED\BodyBelt\data\BodyBelt_destruct.rvmat"
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
};
