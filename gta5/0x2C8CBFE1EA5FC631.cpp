// finale_heist2a.ysc @ L139202
int func_1055(int iParam0, int iParam1)
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    iVar0 = (VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES(iParam0) + VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_BONES(iParam0));
    if ((((VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false)) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false) && !iLocal_1898)) || iVar0 >= iParam1)
    {
      return 1;
    }
  }
  return 0;
}