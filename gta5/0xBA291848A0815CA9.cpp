// abigail2.ysc @ L36101
int func_274()
{
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
  {
    return 1;
  }
  if (func_464(iLocal_162))
  {
    if (func_275(iLocal_169, 1, 1116471296, 1126825984, 0, 0, 0, 0))
    {
      return 1;
    }
    if (PED::IS_PED_BEING_JACKED(iLocal_169))
    {
      return 1;
    }
    if (func_464(iLocal_162))
    {
      if (PED::IS_PED_IN_VEHICLE(iLocal_169, iLocal_162, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_162, PLAYER::PLAYER_PED_ID(), true))
      {
        return 1;
      }
      if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_162, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_162, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_162, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_162, 5, false))
      {
        return 1;
      }
    }
  }
  return 0;
}