// fm_mission_controller.ysc @ L671602
void func_11098()
{
  bool bVar0;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar0 = false;
  while (bVar0 <= 31)
  {
    iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(bVar0);
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
    {
      bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(bVar1);
      iVar3 = PLAYER::GET_PLAYER_PED(bVar2);
      if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
      {
        iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
        if ((MISC::IS_BIT_SET(Local_31280[bVar0 /*292*/].f_193, 2) || MISC::IS_BIT_SET(Local_31280[bVar0 /*292*/].f_192, 2)) || NETWORK::_0x7EF7649B64D7FF10(iVar4))
        {
          CAM::_DISABLE_CAM_COLLISION_FOR_ENTITY(iVar4);
        }
      }
    }
    bVar0++;
  }
}