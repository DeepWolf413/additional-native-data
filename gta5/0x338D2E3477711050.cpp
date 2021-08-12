// am_mp_island.ysc @ L226403
void func_2726()
{
  if ((Local_193.f_1211 || MISC::IS_BIT_SET(Local_1474.f_4, true)) || MISC::IS_BIT_SET(Local_1474.f_4, 3))
  {
    NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
    MISC::CLEAR_OVERRIDE_WEATHER();
  }
}