class CfgPatches
{
	class Example_Adjust
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
class CfgMods
{
	class Example_Adjust
	{
		dir="Example_Adjust";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Example_Adjust";
		credits="Hoot"; 
		author="Hoot";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Example_Adjust/scripts/3_game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Example_Adjust/scripts/4_world"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Example_Adjust/scripts/5_mission"
				};
			};
		};
	};
};
