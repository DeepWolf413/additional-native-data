// abigail2_1.ysc @ L18729
void func_269(int iParam0, bool bParam1)
{
  if (!func_266(iParam0, 4))
  {
    return;
  }
  if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_527(iParam0), func_528(iParam0)))
  {
    return;
  }
  if (bParam1)
  {
    UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_527(iParam0), func_528(iParam0), 2, "");
    func_530(iParam0, 16);
  }
  else
  {
    if (func_266(iParam0, 8))
    {
      UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_527(iParam0), func_528(iParam0), 1, "");
    }
    else
    {
      UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_527(iParam0), func_528(iParam0), 0, "");
    }
    func_529(iParam0, 16);
  }
}