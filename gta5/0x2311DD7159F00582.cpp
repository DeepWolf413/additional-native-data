// am_heli_taxi.ysc @ L18646
void func_449()
{
  int iVar0;
  
  iVar0 = iLocal_1214;
  if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
  {
    return;
  }
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
  {
    VEHICLE::_0x065D03A9D6B2C6B5(iVar0, 0);
    VEHICLE::_0x2311DD7159F00582(iVar0, true);
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 4);
    if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) != 0 && VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iVar0) != 1)
    {
      MISC::CLEAR_BIT(&iLocal_290, 15);
    }
  }
}