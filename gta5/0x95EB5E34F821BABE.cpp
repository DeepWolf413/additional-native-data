// am_casino_peds.ysc @ L175059
int func_1876(var uParam0, bool bParam1)
{
  int iVar0;
  struct<10> Var1;
  
  if (func_2052(bParam1))
  {
    iVar0 = func_2045(bParam1);
    Var1.f_1 = -1;
    Var1.f_2 = -1;
    Var1.f_3 = -1;
    Var1.f_4 = -1;
    Var1.f_8 = -1;
    Var1.f_9 = 46;
    Var1 = *uParam0;
    Var1.f_6 = 1;
    func_1880(&Var1, func_2044(iVar0), 0, 1, 1, !func_2041(), 0, func_2039(), func_2037(func_2038(bParam1), 0), func_2036(iVar0));
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_1879(bParam1, 0), false);
    if (GRAPHICS::_OVERRIDE_PED_BADGE_TEXTURE(*uParam0, func_1879(bParam1, 0), func_1877(bParam1, 2)))
    {
    }
    return 1;
  }
  return 0;
}