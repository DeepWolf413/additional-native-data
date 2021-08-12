// dominoes_sp.ysc @ L17028
bool func_483(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_208(iParam0))
  {
    return false;
  }
  iVar0 = func_554(iParam0);
  return HUD::_UIPROMPT_HAS_PRESSED_TIMED_MODE_FAILED(Global_1945938[iVar0 /*18*/].f_3);
}