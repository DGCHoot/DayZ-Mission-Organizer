class MapPouch_ColorBase extends Container_Base
{
	override bool IsContainer()
	{
		return true;
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}	
		if ( parent.IsKindOf("BackPouch_ColorBase") || parent.IsKindOf("Paragon_ButtPouch_ColorBase") || parent.IsKindOf("Paragon_FrontPouch_ColorBase") || parent.IsKindOf("MapPouch_ColorBase"))
		{
			return false;
		}
		
		return true;
	}
};

class Paragon_MapPouch_Black: MapPouch_ColorBase {};
class Paragon_MapPouch_Green: MapPouch_ColorBase {};
class Paragon_MapPouch_Desert: MapPouch_ColorBase {};
class Paragon_MapPouch_Blue: MapPouch_ColorBase {};
class Paragon_MapPouch_White: MapPouch_ColorBase {};