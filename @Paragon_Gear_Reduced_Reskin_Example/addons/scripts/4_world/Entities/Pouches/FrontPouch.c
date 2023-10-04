class Paragon_FrontPouch_ColorBase extends Container_Base
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

class Paragon_FrontPouch_Digital_Flora: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Digital_Desert: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Flora: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Black: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Green: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Fatigue: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Blue: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_White: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Navy: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_Black_WL: Paragon_FrontPouch_ColorBase {};
class Paragon_FrontPouch_WL: Paragon_FrontPouch_ColorBase {};