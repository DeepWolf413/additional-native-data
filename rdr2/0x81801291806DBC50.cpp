// abigail2_1.ysc @ L80747
float func_2385(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_10(iParam0))
  {
    return 0f;
  }
  iVar0 = func_180(iParam0);
  if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
  {
    return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1945938[iVar0 /*18*/].f_3);
  }
  return HUD::_0x81801291806DBC50(Global_1945938[iVar0 /*18*/].f_3);
}