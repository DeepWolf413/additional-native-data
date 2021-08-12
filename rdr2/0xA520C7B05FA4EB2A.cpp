// feud1.ysc @ L84117
void func_1967(int iParam0, int iParam1)
{
  int iVar0;

  if (!func_10(iParam0))
  {
    return;
  }
  iVar0 = func_193(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  HUD::_0xA520C7B05FA4EB2A(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}