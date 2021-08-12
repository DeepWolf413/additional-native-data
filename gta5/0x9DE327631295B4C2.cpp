// am_casino_peds.ysc @ L216648
int func_2080()
{
  if (func_2082(0) && !MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319, 29))
  {
    MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_319), 29);
  }
  if (func_15(PLAYER::PLAYER_PED_ID()))
  {
    if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
    {
      return 1;
    }
  }
  if (func_2075())
  {
    return 1;
  }
  if (func_2081())
  {
    return 1;
  }
  return 0;
}