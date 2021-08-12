// mob3_outro.ysc @ L2525
bool func_110(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return false;
  }
  if (bParam1 && VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0)) >= iParam2)
  {
    if (((((!func_138(iParam0, 4) || !func_138(iParam0, 1)) || !func_138(iParam0, 2)) || !func_138(iParam0, 3)) || !func_138(iParam0, 4)) || !func_138(iParam0, 5))
    {
      return true;
    }
  }
  if (bParam3 && ENTITY::GET_ENTITY_MODEL(iParam0) == iParam4)
  {
    return true;
  }
  return false;
}