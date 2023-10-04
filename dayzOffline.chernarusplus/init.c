void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
			itemEnt.SetHealth01( "", "", rndHlt );
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
		Class.CastTo( m_player, playerEnt );

		GetGame().SelectPlayer( identity, m_player );

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemClothing;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

player.RemoveAllItems();

  	ref TStringArray topsArray = 
  {			"TShirt_Green",
            "TShirt_Blue",
            "TShirt_Black",
            "TShirt_Beige",
            "TShirt_Red",
            "TShirt_OrangeWhiteStripes",
            "TShirt_White",
            "TShirt_Red",
            "TShirt_Grey",
            "TShirt_RedBlackStripes"
			};
  ref TStringArray pantsArray = 
  {			"CanvasPants_Beige",
            "CanvasPants_Blue",
            "CanvasPants_Grey",
            "ShortJeans_Black",
            "ShortJeans_Blue",
            "ShortJeans_Brown",
            "ShortJeans_Darkblue",
            "ShortJeans_Green",
            "ShortJeans_Red",
            "CanvasPants_Red",
            "CanvasPants_Violet",
            "CanvasPantsMidi_Beige",
            "CanvasPantsMidi_Blue",
            "CanvasPantsMidi_Grey",
            "CanvasPantsMidi_Red",
            "CanvasPantsMidi_Violet",
            "TrackSuitPants_Black",
            "TrackSuitPants_Blue",
            "TrackSuitPants_Green",
            "TrackSuitPants_Red",
            "TrackSuitPants_LightBlue"
			};
  ref TStringArray shoesArray = 
  {			"AthleticShoes_Blue",
            "DressShoes_Beige",
            "DressShoes_Black",
            "DressShoes_Brown",
            "DressShoes_SunBurst",
            "DressShoes_White",
            "AthleticShoes_Grey",
            "AthleticShoes_Brown",
            "AthleticShoes_Green",
            "AthleticShoes_Black",
            "JoggingShoes_Red",
            "JoggingShoes_Blue",
            "JoggingShoes_Black",
            "JoggingShoes_Violet",
            "JoggingShoes_White"
			};
  ref TStringArray backpackArray = 
  {
			"ChildBag_Green",
            "ChildBag_Red",
            "ChildBag_Blue",
            "SlingBag_Black",
            "SlingBag_Black",
            "SlingBag_Gray",
            "SlingBag_Brown",
            "Msp_SlingBackpack_Gray",
            "Msp_SlingBackpack_Black",
            "Msp_SlingBackpack_Green",
            "Msp_SlingBackpack_Tan"
			};


  EntityAI item1 = player.GetInventory().CreateInInventory(topsArray.GetRandomElement());
 EntityAI item2 = player.GetInventory().CreateInInventory(pantsArray.GetRandomElement());
  EntityAI item3 = player.GetInventory().CreateInInventory(shoesArray.GetRandomElement());
  EntityAI item4 = player.GetInventory().CreateInInventory(backpackArray.GetRandomElement());

		
		itemClothing = player.FindAttachmentBySlotName( "Body" );
		if ( itemClothing )
		{
			SetRandomHealth( itemClothing );
			
			itemEnt = itemClothing.GetInventory().CreateInInventory( "BandageDressing" );
			player.SetQuickBarEntityShortcut(itemEnt, 2);
			
			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
			int rndIndex = Math.RandomInt( 0, 4 );
			itemEnt = itemClothing.GetInventory().CreateInInventory( chemlightArray[rndIndex] );
			SetRandomHealth( itemEnt );
			player.SetQuickBarEntityShortcut(itemEnt, 1);

			rand = Math.RandomFloatInclusive( 0.0, 1.0 );
			if ( rand < 0.35 )
				itemEnt = player.GetInventory().CreateInInventory( "Apple" );
			else if ( rand > 0.65 )
				itemEnt = player.GetInventory().CreateInInventory( "Pear" );
			else
				itemEnt = player.GetInventory().CreateInInventory( "Plum" );
			player.SetQuickBarEntityShortcut(itemEnt, 3);
			SetRandomHealth( itemEnt );
			player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");    // added items
   			player.GetInventory().CreateInInventory("Mag_Glock_15Rnd");    // added items
   			player.GetInventory().CreateInInventory("Canteen");    // added items
   			player.GetInventory().CreateInInventory("Hatchet");    // added items
   			player.GetInventory().CreateInInventory("CombatKnife");    // added items
   			player.GetInventory().CreateInInventory("SN_Glock19");    // added items
   			player.GetInventory().CreateInInventory("Whetstone");    // added items
		}
		
		itemClothing = player.FindAttachmentBySlotName( "Legs" );
		if ( itemClothing )
			SetRandomHealth( itemClothing );
		
		itemClothing = player.FindAttachmentBySlotName( "Feet" );
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}