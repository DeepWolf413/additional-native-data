// am_mp_arena_garage.ysc @ L313826
void func_4975(var uParam0)
{
  int iVar0;
  
  if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
  {
    iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1835392.f_2826);
    if (iVar0 < 300000)
    {
      MISC::SET_BIT(&(uParam0->f_42), 5);
    }
    else
    {
      MISC::CLEAR_BIT(&(uParam0->f_42), 5);
      func_4944(Global_1835392.f_2826, -1);
    }
  }
}