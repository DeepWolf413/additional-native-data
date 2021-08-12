// act_cinema.ysc @ L91276
int func_605()
{
  if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
    {
      return 0;
    }
  }
  if (Global_2405077.f_516 == MISC::GET_FRAME_COUNT())
  {
    return 0;
  }
  if (!func_99(PLAYER::PLAYER_ID()) && !func_74())
  {
    return 0;
  }
  return 1;
}