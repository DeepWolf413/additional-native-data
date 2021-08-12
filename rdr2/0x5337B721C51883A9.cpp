// act_fishing06.ysc @ L43719
int func_1296(var uParam0, var uParam1, int iParam2, int iParam3)
{
  if (ENTITY::IS_ENTITY_DEAD(*uParam0))
  {
    return 0;
  }
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false, false))
  {
    return 0;
  }
  if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *uParam0)
  {
    if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
    {
      if (iParam3 && func_1478(*uParam1))
      {
        iParam2 = func_1479(*uParam1);
      }
      else
      {
        return 0;
      }
    }
    if (PED::IS_PED_ON_MOUNT(*uParam0))
    {
      PED::_REMOVE_PED_FROM_MOUNT(*uParam0, true, false);
    }
    PED::SET_PED_INTO_VEHICLE(*uParam0, *uParam1, iParam2);
  }
  return 1;
}