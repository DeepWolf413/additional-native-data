// family6.ysc @ L13417
int func_83()
{
  if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
  {
    return 0;
  }
  if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
  {
    if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
    {
      return 0;
    }
    if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
    {
      if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_DURATION() > 0)
      {
        if (STREAMING::GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() > 100)
        {
          return 0;
        }
      }
    }
  }
  return 1;
}