// gb_casino.ysc @ L452071
void func_8294()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 30)
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2852.f_947[iVar0 /*8*/]))
    {
      if (NETWORK::NET_TO_VEH(uLocal_2852.f_947[iVar0 /*8*/]) == VEHICLE::GET_LAST_DRIVEN_VEHICLE())
      {
        VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
      }
      if (func_8295(iVar0))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uLocal_2852.f_947[iVar0 /*8*/]))
        {
          func_1361(&(uLocal_2852.f_947[iVar0 /*8*/]));
        }
      }
      else
      {
        func_668(&(uLocal_2852.f_947[iVar0 /*8*/]));
      }
    }
    iVar0++;
  }
}