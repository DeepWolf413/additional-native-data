// abigail2_1.ysc @ L80709
void func_2383(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;

  if (bParam2 && !func_10(iParam0))
  {
    return;
  }
  iVar0 = func_180(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  HUD::_0xF4A5C4509BF923B1(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}