// am_kill_list.ysc @ L28634
void func_727()
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  while (iVar0 < 4)
  {
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_84.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_84.f_7[iVar0]))
    {
      iVar1 = NETWORK::NET_TO_VEH(Local_84.f_7[iVar0]);
      if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
      {
        PHYSICS::_SET_ENTITY_PROOF_UNK(iVar1, true);
      }
    }
    iVar0++;
  }
}