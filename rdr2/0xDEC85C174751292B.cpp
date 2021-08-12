// bounty1.ysc @ L48773
void func_1221(int iParam0, char* sParam1)
{
  int iVar0;

  if (func_10(iParam0))
  {
    iVar0 = func_172(iParam0);
    if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
    {
      HUD::_UIPROMPT_SET_TAG(Global_1945938[iVar0 /*18*/].f_3, sParam1);
    }
  }
}