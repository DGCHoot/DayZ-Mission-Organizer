class BackPouch_ColorBase extends Container_Base
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

class Paragon_BackPouch_Black: BackPouch_ColorBase {};
class Paragon_BackPouch_Desert: BackPouch_ColorBase {};
class Paragon_BackPouch_Green: BackPouch_ColorBase {};
class Paragon_BackPouch_Blue: BackPouch_ColorBase {};
class Paragon_BackPouch_White: BackPouch_ColorBase {};