// extreme2.ysc @ L100203
void func_609(int iParam0)
{
  if (func_856(iParam0))
  {
    VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0);
    if (VEHICLE::IS_VEHICLE_HIGH_DETAIL(iParam0))
    {
      VEHICLE::SET_FORCE_HD_VEHICLE(iParam0, true);
    }
  }
}