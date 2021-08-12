// am_casino_peds.ysc @ L306458
void func_4172(var uParam0)
{
  if (MISC::IS_BIT_SET(uParam0->f_22, true))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22.f_255) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22.f_255, true))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_22.f_255))
      {
        VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam0->f_22.f_255, false);
        if (uParam0->f_22.f_254 != 0 && uParam0->f_22.f_254 != VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(uParam0->f_22.f_255))
        {
          VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_22.f_255, uParam0->f_22.f_254);
        }
        func_4116(uParam0, 1);
      }
      else
      {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_22.f_255);
      }
    }
    else
    {
      func_4116(uParam0, 1);
    }
    func_1412(PLAYER::PLAYER_ID(), 1, 0, 0);
    PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
  }
}