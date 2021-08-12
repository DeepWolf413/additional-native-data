// campfire_gang.ysc @ L38853
bool func_937(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (uParam0->f_528.f_1[iVar0 /*9*/].f_7 == 0)
    {
      return true;
    }
    if (!PED::_0xA0BC8FAED8CFEB3C(uParam0->f_528.f_1[iVar0 /*9*/]))
    {
      return false;
    }
    if (uParam0->f_528.f_1[iVar0 /*9*/].f_8 == 0 || PED::_0x98082246107A6ACF(uParam0->f_528.f_1[iVar0 /*9*/], uParam0->f_528.f_1[iVar0 /*9*/].f_8))
    {
    }
    else
    {
      PED::_SET_PED_BODY_COMPONENT(uParam0->f_528.f_1[iVar0 /*9*/], uParam0->f_528.f_1[iVar0 /*9*/].f_8);
      PED::_UPDATE_PED_VARIATION(uParam0->f_528.f_1[iVar0 /*9*/], false, true, true, true, false);
    }
    iVar0++;
  }
  return true;
}