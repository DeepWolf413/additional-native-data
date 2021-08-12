// beechers2_2.ysc @ L67228
void func_1676(int iParam0, int iParam1)
{
  int iVar0;

  if (!func_10(iParam0))
  {
    return;
  }
  iVar0 = func_188(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}