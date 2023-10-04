class IFAK_ColorBase: Inventory_Base
{
	override void SetActions()
	{
		super.SetActions();

		AddAction(ActionPGIFAKSelf);
		AddAction(ActionPGIFAKTarget);
	}
};

class Paragon_IFAK_Desert :IFAK_ColorBase{};
class Paragon_IFAK_Black :IFAK_ColorBase{};
class Paragon_IFAK_Green :IFAK_ColorBase{};
class Paragon_IFAK_Blue :IFAK_ColorBase{};
class Paragon_IFAK_White :IFAK_ColorBase{};
