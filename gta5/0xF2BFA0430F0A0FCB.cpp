// finalec2.ysc @ L122543
void func_881(int iParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 1, 1, 0f);
    VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 0, 1, 0f);
    VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 2, 1, 0f);
    VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 3, 1, 0f);
  }
}