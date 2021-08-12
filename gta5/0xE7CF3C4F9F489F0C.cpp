// am_casino_peds.ysc @ L334636
int func_4719(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  
  if (func_4720(iParam0, 1) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iParam0))
  {
    VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam0, &iVar0);
    if (func_988(iVar0, 1) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
    {
      if (!bParam2)
      {
        return 1;
      }
      else if (func_986(iVar0) == bParam1)
      {
        return 1;
      }
    }
  }
  return 0;
}