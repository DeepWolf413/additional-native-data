// abigail2_1.ysc @ L49571
bool func_1258(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_10(iParam0))
  {
    return false;
  }
  iVar0 = func_180(iParam0);
  return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}