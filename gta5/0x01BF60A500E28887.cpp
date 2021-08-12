// act_cinema.ysc @ L3899
int func_96(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
    {
      iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
      NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(iVar1, true);
      if (iParam1 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
      {
        NETWORK::_SET_RELATIONSHIP_TO_PLAYER(bVar1, true);
      }
    }
    iVar0++;
  }
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    NETWORK::SET_NETWORK_VEHICLE_AS_GHOST(iParam0, true);
    return 1;
  }
  else
  {
    NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
  }
  return 0;
}