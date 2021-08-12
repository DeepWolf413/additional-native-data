// carsteal3.ysc @ L100232
int func_563(int iParam0, int iParam1)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
    {
      if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
      {
        if (!VEHICLE::IS_VEHICLE_STOPPED(iParam1))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}