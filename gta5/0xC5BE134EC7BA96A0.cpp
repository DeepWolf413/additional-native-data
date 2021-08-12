// am_armwrestling.ysc @ L125238
void func_1296(int iParam0)
{
  if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !Global_1312878) && !Global_1312879)
  {
    if (((Global_2453903.f_3474 != 0 && Global_2453903.f_3474.f_1 != 0) && Global_2453903.f_3474.f_2 != 0) && Global_2453903.f_3474.f_3 != 0)
    {
      STATS::PLAYSTATS_LEAVE_JOB_CHAIN(Global_2453903.f_3474, Global_2453903.f_3474.f_1, Global_2453903.f_3474.f_2, Global_2453903.f_3474.f_3, iParam0);
    }
  }
  func_1297();
}