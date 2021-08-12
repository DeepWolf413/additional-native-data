// abigail2_1_intro.ysc @ L3757
bool func_163()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 5)
  {
    if ((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_0xA9016536015DE29D(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_0x1F0E401031E20146(Global_43806[iVar0 /*6*/], "pl_breakout"))
    {
      return true;
    }
    iVar0++;
  }
  return false;
}