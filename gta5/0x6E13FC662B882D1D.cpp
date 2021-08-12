// finale_heist2a.ysc @ L119325
void func_842(int iParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 0);
    VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 1);
    VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 4);
    VEHICLE::SET_VEHICLE_TYRE_FIXED(iParam0, 5);
  }
}