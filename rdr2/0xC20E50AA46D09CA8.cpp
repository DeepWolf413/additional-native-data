// ambush_exc_road_robbery.ysc @ L12170
void func_419(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
    {
      if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iParam2) && !PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
      {
        TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, iParam4, iParam2, fParam3, iParam5, 0);
      }
    }
  }
}