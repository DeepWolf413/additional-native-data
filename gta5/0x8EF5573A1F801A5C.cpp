// fm_bj_race_controler.ysc @ L167074
void func_2058(var uParam0, var uParam1, int iParam2, int* iParam3)
{
  var uVar0;
  
  if (func_4464(uParam0) || func_258(Global_4194305.f_5))
  {
    return;
  }
  if (MISC::SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(iParam2, iParam3, &uVar0))
  {
    uParam1->f_809 = *iParam3;
  }
}