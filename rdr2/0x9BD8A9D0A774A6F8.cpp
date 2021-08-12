// property_use_core.ysc @ L28825
int func_1016(var uParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;

  if (!func_278(iParam1, 0))
  {
    return 0;
  }
  iVar0 = func_1604(iParam1, iParam2);
  if (iParam3 >= 0)
  {
    iVar0 = iParam3;
  }
  func_1605(iVar0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
  TELEMETRY::_TELEMETRY_SHOP_SELL(func_82(uParam0->f_2), func_459(uParam0->f_3), iParam1, iParam2, iVar0);
  uParam0->f_1999.f_4 = 1;
  uParam0->f_6 = 1;
  uParam0->f_2319.f_11 = 1;
  uParam0->f_2009 = uParam0->f_2008;
  uParam0->f_2008 = iParam1;
  uParam0->f_2013 = iVar0;
  AUDIO::PLAY_SOUND_FRONTEND("SELL", "HUD_SHOP_SOUNDSET", true, 0);
  return 1;
}