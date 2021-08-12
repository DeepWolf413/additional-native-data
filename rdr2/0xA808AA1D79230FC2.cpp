// beat_arms_deal.ysc @ L10052
bool func_303(int iParam0, int iParam1, int iParam2)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
    {
      if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2) == iParam0)
      {
        return true;
      }
    }
  }
  return false;
}