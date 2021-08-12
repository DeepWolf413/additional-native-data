// beat_bear_trap.ysc @ L19096
bool func_614(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_172(iParam0))
  {
    return false;
  }
  iVar0 = func_395(iParam0);
  return HUD::_UIPROMPT_HAS_MASH_MODE_FAILED(Global_1945938[iVar0 /*18*/].f_3);
}