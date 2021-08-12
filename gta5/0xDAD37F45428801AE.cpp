// am_armwrestling.ysc @ L113133
int func_814(var uParam0, var uParam1, int* iParam2)
{
  if (!func_1064(uParam0, 3))
  {
    func_815(uParam0);
    func_745(uParam1, 0, 0, 0, 1);
    func_744(uParam1, "ARMMP_END_QT", 2, 51, 1, 1, 0);
    func_743(uParam1, 1);
    func_1068(uParam0, 3, 1);
  }
  if (func_1064(uParam0, 2))
  {
    return 1;
  }
  if (func_758(iParam2))
  {
    if (func_757(iParam2) > 1.5f)
    {
      if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
      {
        HUD::CLEAR_HELP(true);
      }
      func_1068(uParam0, 3, 0);
    }
  }
  else
  {
    func_756(iParam2, 0, 1);
  }
  return 0;
}