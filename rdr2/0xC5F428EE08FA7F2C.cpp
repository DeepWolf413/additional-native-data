// gang2.ysc @ L71522
void func_1852(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (!func_10(iParam0))
  {
    return;
  }
  iVar0 = func_180(iParam0);
  iVar1 = Global_1945938[iVar0 /*18*/].f_3;
  HUD::_UIPROMPT_SET_URGENT_PULSING_ENABLED(iVar1, iParam1);
}