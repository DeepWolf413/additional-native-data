// arena_carmod.ysc @ L171212
int func_1603(int iParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam0) > 1)
    {
      return 1;
    }
  }
  return 0;
}