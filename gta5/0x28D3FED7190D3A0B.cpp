// abigail1.ysc @ L40427
int func_339(int iParam0)
{
  if (func_303(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
    {
      if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
      {
        return 1;
      }
    }
  }
  return 0;
}