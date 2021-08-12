// act_cinema.ysc @ L113441
void func_1063()
{
  int iVar0;
  int iVar1;
  
  if (!MISC::IS_BIT_SET(iLocal_233, iLocal_234))
  {
    if (Local_315[bLocal_234 /*2*/])
    {
      if (bLocal_234 != NETWORK::PARTICIPANT_ID_TO_INT())
      {
        iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_234));
        func_1064("MP_CIN_TICKIN", iVar0, 0, 0, 0, 1, 0);
      }
      MISC::SET_BIT(&iLocal_233, bLocal_234);
    }
  }
  else if (!Local_315[bLocal_234 /*2*/])
  {
    if (bLocal_234 != NETWORK::PARTICIPANT_ID_TO_INT())
    {
      iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bLocal_234));
      func_1064("MP_CIN_TICKOUT", iVar1, 0, 0, 0, 1, 0);
    }
    MISC::CLEAR_BIT(&iLocal_233, bLocal_234);
  }
  bLocal_234++;
  if (bLocal_234 >= NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
  {
    bLocal_234 = false;
  }
}