// am_kill_list.ysc @ L8872
void func_164()
{
  if (func_16(PLAYER::PLAYER_ID(), 0))
  {
    return;
  }
  if (Local_718[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
  {
    if (!MISC::IS_BIT_SET(iLocal_1296, 13))
    {
      MISC::SET_BIT(&iLocal_1296, 13);
      NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
    }
  }
  else if (MISC::IS_BIT_SET(iLocal_1296, 13))
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
      {
        NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
        MISC::CLEAR_BIT(&iLocal_1296, 13);
      }
    }
  }
}