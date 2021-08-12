// am_mp_casino_nightclub.ysc @ L490973
void func_6989(int iParam0, struct<4> Param1, var uParam5, var uParam6)
{
  if (Param1.f_2)
  {
    if (func_6992())
    {
      func_6943(iParam0, 0);
      Global_1316851.f_3 = Param1.f_3;
      STATS::_0xB26F670685631727(Global_1316851.f_3, iParam0 + 1);
      Global_1316851.f_9 = 0;
      Global_1316851.f_10 = 0;
      func_6942(uParam6, 3);
      func_6986(uParam5, 2);
    }
  }
  else if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    uParam6->f_2 = func_6991(iParam0, uParam5->f_10);
    Global_1316851.f_9 = 0;
    Global_1316851.f_10 = 0;
    uParam6->f_1 = 0;
    func_6990(1);
  }
}