// am_airstrike.ysc @ L1863
void func_55()
{
  int iVar0;
  
  if (!func_94(Local_242.f_2.f_3))
  {
    if (func_56(Local_242.f_2.f_3))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_242.f_2.f_3))
      {
        iVar0 = NETWORK::NET_TO_PED(Local_242.f_2.f_3);
        ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
      }
    }
  }
}