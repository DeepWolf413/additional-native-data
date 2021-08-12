// beat_bear_trap.ysc @ L19134
void func_618(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
  int iVar0;
  int iVar1;

  if (bParam4 && !func_172(iParam0))
  {
    return;
  }
  iVar0 = func_395(iParam0);
  iVar1 = Global_1945938[iVar0 /*18*/].f_3;
  if (!HUD::_UIPROMPT_HAS_MANUAL_MASH_MODE(iVar1))
  {
    return;
  }
  HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(iVar1, fParam1);
  HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(iVar1, fParam2);
  HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(iVar1, fParam3);
}