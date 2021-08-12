// am_gang_call.ysc @ L18613
void func_536()
{
  if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_63.f_45)
  {
    if (func_544(Local_63.f_45, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= Local_63.f_45)
      {
        NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_63.f_45);
      }
    }
  }
  if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != Local_63.f_46)
  {
    if (func_543(Local_63.f_45, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= Local_63.f_46)
      {
        NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_63.f_46);
      }
    }
  }
  if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_63.f_47)
  {
    if (func_537(Local_63.f_45, 0, 1))
    {
      if (NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(false) <= Local_63.f_47)
      {
        NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_63.f_47);
      }
    }
  }
}