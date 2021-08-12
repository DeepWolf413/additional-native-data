// am_heli_taxi.ysc @ L11379
void func_306(int iParam0, int iParam1)
{
  if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 0)
  {
    VEHICLE::SET_VEHICLE_LIVERY(iParam1, 0);
    if (iParam0 == 0)
    {
    }
  }
}