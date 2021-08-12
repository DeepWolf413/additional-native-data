// abigail2_1.ysc @ L79177
void func_2317(int iParam0, bool bParam1)
{
  if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
  {
    if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_966(iParam0, 8))
    {
      HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
    }
    else
    {
      HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
    }
  }
}