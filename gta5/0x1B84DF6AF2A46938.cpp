// am_mp_ie_warehouse.ysc @ L37423
int func_528()
{
  int iVar0;
  
  if (func_530())
  {
    return NETWORK::PARTICIPANT_ID_TO_INT();
  }
  if (func_23(PLAYER::PLAYER_ID(), 0))
  {
    iVar0 = func_521();
    if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
    {
      if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar0))
      {
        return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar0);
      }
    }
  }
  return -1;
}