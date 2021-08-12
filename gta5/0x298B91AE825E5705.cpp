// am_airstrike.ysc @ L2632
int func_92(int iParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_HELI(iParam0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
    {
      if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iParam0)
      {
        return 1;
      }
    }
  }
  return 0;
}