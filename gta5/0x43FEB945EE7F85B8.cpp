// gb_gunrunning.ysc @ L14760
void func_326(bool bParam0, int iParam1)
{
  if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("insurgent"))
  {
    VEHICLE::SET_VEHICLE_MOD_KIT(iParam1, 0);
    VEHICLE::SET_VEHICLE_MOD(iParam1, 15, 4, false);
    VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam1, 4);
    VEHICLE::SET_VEHICLE_MOD(iParam1, 23, 6, false);
    VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, 0, 0);
    VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam1, 3, 0, 0);
    VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam1, 3, 0);
  }
  VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, true);
}