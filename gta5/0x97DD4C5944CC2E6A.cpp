// fm_mission_controller.ysc @ L682657
void func_11323(bool bParam0)
{
  bool bVar0;
  int iVar1;
  bool bVar2;
  
  bVar0 = false;
  while (bVar0 <= 31)
  {
    iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(bVar0);
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
    {
      bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(bVar1);
      NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(bVar2, bParam0);
      NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS(bVar2, bParam0);
    }
    bVar0++;
  }
}