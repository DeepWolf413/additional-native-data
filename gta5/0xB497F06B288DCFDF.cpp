// barry3a.ysc @ L44929
int func_389()
{
  if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_145.f_4))
  {
    if (iLocal_153)
    {
      if ((MISC::GET_GAME_TIMER() - iLocal_154) > 7000)
      {
        return 1;
      }
    }
    else
    {
      iLocal_153 = 1;
      iLocal_154 = MISC::GET_GAME_TIMER();
    }
  }
  else
  {
    if (iLocal_153)
    {
    }
    iLocal_153 = 0;
  }
  return 0;
}