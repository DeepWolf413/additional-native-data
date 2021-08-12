// main.ysc @ L152708
void func_1923(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = Global_62323[iParam1 /*13*/].f_4;
  if (iVar0 == 0)
  {
    return;
  }
  Global_62323[iParam1 /*13*/].f_1 = iParam0;
  iVar1 = iParam0 + 1;
  STATS::STAT_SET_INT(iVar0, iVar1, true);
  if (func_35(0) && Global_62090)
  {
    MISC::ADD_REPLAY_STAT_VALUE(iVar0);
    MISC::ADD_REPLAY_STAT_VALUE(iParam0);
    MISC::ADD_REPLAY_STAT_VALUE(iParam1);
  }
}