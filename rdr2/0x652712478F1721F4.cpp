// rcm_gunslinger5_1.ysc @ L55686
bool func_1872()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_922[0]))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iLocal_922[0]))
    {
      VEHICLE::SET_VEHICLE_EXTRA(iLocal_922[0], 1, true);
      VEHICLE::SET_VEHICLE_EXTRA(iLocal_922[0], 2, true);
      VEHICLE::SET_VEHICLE_EXTRA(iLocal_922[0], 3, true);
      VEHICLE::SET_VEHICLE_EXTRA(iLocal_922[0], 4, true);
      func_635(&iLocal_917, 4194304);
      func_635(&iLocal_917, 16);
      VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_922[0], false);
      func_262(&uLocal_1096);
      return true;
    }
  }
  else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_922[0]))
  {
    iLocal_922[0] = VEHICLE::CREATE_VEHICLE(joaat("GATCHUCK_2"), 2394.937f, -378.2107f, 41.15212f, 280.2533f, true, true, false, false);
  }
  return false;
}