// fm_mission_controller.ysc @ L317628
void func_4372(bool bParam0, bool bParam1, bool bParam2)
{
  bool bVar0;
  int iVar1;
  bool bVar2;
  
  bVar0 = false;
  while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(bVar0);
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
    {
      bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(bVar1);
      if (func_197(bVar2, 1, 1))
      {
        if (bVar2 != bLocal_3284)
        {
          NETWORK::NETWORK_CONCEAL_PLAYER(bVar2, bParam0, false);
        }
      }
    }
    bVar0++;
  }
  if (bParam1)
  {
    NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iLocal_3286, !bParam0, bParam2);
  }
}