// exile2.ysc @ L107561
int func_564()
{
  if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
  {
    if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
    {
      if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
      {
        if (Local_2102 == 1)
        {
          return 1;
        }
      }
      else if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 0)
      {
        if (Local_2102 == 3)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}