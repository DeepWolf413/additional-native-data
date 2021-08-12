// mob4.ysc @ L80815
void func_2392(int iParam0, float fParam1)
{
  int iVar0;

  if (func_10(iParam0))
  {
    iVar0 = func_176(iParam0);
    if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
    {
      HUD::_UIPROMPT_SET_SPINNER_POSITION(Global_1945938[iVar0 /*18*/].f_3, func_1711(fParam1, 0f, 1f));
    }
  }
}