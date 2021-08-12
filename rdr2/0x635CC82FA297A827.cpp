// braithwaites2.ysc @ L72636
bool func_1887(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_10(iParam0))
  {
    return false;
  }
  iVar0 = func_190(iParam0);
  return HUD::_UIPROMPT_IS_JUST_RELEASED(Global_1945938[iVar0 /*18*/].f_3);
}