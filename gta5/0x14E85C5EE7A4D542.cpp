// fm_content_island_heist.ysc @ L42941
void func_1347(int iParam0, int iParam1)
{
  if (func_180(iParam0, 15))
  {
    return;
  }
  if (Local_792.f_891.f_1[iParam0 /*14*/].f_3 == joaat("dinghy"))
  {
    VEHICLE::SET_BOAT_ANCHOR(iParam1, false);
  }
  if (Local_792.f_891.f_1[iParam0 /*14*/].f_3 == joaat("buzzard2"))
  {
    VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
  }
  VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
  PHYSICS::ACTIVATE_PHYSICS(iParam1);
  ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
  if (VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iParam1))
  {
    VEHICLE::SET_VEHICLE_SEARCHLIGHT(iParam1, true, true);
  }
  VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 2);
}