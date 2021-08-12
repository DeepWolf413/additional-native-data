// braithwaites1.ysc @ L85204
bool func_2082(var uParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false))
  {
    if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
    {
      return true;
    }
  }
  return false;
}