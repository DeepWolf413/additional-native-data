// rcm_abigail31.ysc @ L10109
bool func_304()
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
  {
    iLocal_124 = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), func_206(7), func_207(7), true, true, false, false);
    return false;
  }
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
  {
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
    VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iLocal_124, true);
    AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_124, 0, 16, -1);
    AITRANSPORT::_0xB7079F4C72896756(iLocal_67, iLocal_124, 0, 16, 0);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 1, true);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 2, true);
    VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 3, true);
    VEHICLE::_SET_VEHICLE_TINT(iLocal_124, 5);
    VEHICLE::_SET_VEHICLE_LIVERY(iLocal_124, 0);
    VEHICLE::_0x226C6A4E3346D288(iLocal_124, 0);
    VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iLocal_124, false);
  }
  return true;
}