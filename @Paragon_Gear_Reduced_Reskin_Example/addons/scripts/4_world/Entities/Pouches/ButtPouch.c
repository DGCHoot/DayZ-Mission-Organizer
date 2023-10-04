class Paragon_ButtPouch_ColorBase extends Container_Base
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

class Paragon_ButtPouch_Digital_Flora: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Digital_Desert: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Flora: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Black: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Green: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Fatigue: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Blue: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_White: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Navy: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_Black_WL: Paragon_ButtPouch_ColorBase {};
class Paragon_ButtPouch_WL: Paragon_ButtPouch_ColorBase {};