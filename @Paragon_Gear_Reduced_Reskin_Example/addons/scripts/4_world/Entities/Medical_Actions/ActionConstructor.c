modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);

        //IFAK
        actions.Insert(ActionPGIFAKSelf);
		actions.Insert(ActionPGIFAKTarget);

    }
}
