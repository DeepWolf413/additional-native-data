// bounty1.ysc @ L63592
bool func_1692(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_10(iParam0))
  {
    return false;
  }
  iVar0 = func_172(iParam0);
  return HUD::_UIPROMPT_IS_RELEASED(Global_1945938[iVar0 /*18*/].f_3);
}