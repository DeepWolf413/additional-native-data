// act_caunc_rustling.ysc @ L64189
bool func_1849(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_77(iParam0))
  {
    return false;
  }
  iVar0 = func_373(iParam0);
  return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}