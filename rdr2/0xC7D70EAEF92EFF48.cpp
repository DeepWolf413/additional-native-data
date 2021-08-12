// act_caunc_rustling.ysc @ L42288
bool func_1108(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_77(iParam0))
  {
    return false;
  }
  iVar0 = func_373(iParam0);
  if (!HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[iVar0 /*18*/].f_3))
  {
    return PAD::IS_CONTROL_PRESSED(2, Global_1945938[iVar0 /*18*/].f_4);
  }
  return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1945938[iVar0 /*18*/].f_3);
}