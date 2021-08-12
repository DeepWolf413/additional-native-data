// saloon1.ysc @ L53121
void func_1306(int iParam0, int iParam1, bool bParam2)
{
  int iVar0;

  if (bParam2 && !func_10(iParam0))
  {
    return;
  }
  iVar0 = func_193(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  HUD::_UIPROMPT_SET_ORDERING_AS_INPUT_TYPE(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}