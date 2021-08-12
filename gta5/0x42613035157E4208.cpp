// am_mp_property_int.ysc @ L332356
void func_3995()
{
  int iVar0;
  
  iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 1);
  if (Local_10542.f_353 != iVar0)
  {
    if (Local_10542.f_353 < iVar0 || func_1040(Local_10542.f_353, 0, 1))
    {
      NETWORK::_RESERVE_NETWORK_LOCAL_VEHICLES(Local_10542.f_353);
    }
  }
}