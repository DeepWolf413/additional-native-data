// abigail2_1.ysc @ L71815
void func_2073(int iParam0, int iParam1, int iParam2, bool bParam3)
{
  int iVar0;

  if (bParam3 && !func_10(iParam0))
  {
    return;
  }
  iVar0 = func_180(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}