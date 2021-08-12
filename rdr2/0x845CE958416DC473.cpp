// abigail2_1.ysc @ L80763
bool func_2386(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_10(iParam0))
  {
    return false;
  }
  iVar0 = func_180(iParam0);
  if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
  {
    return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
  }
  return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}