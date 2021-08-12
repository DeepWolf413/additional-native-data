// ambush_exc_road_robbery.ysc @ L21607
void func_695(int iParam0, float fParam1, bool bParam2)
{
  int iVar0;

  if (bParam2 && !func_309(iParam0))
  {
    return;
  }
  if (fParam1 <= 0f)
  {
    return;
  }
  iVar0 = func_485(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  Global_1945938[iVar0 /*18*/].f_9 = fParam1;
  HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945938[iVar0 /*18*/].f_3, fParam1);
}