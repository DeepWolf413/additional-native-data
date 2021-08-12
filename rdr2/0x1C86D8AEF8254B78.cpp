// camp_beechershope.ysc @ L70143
bool func_2238(bool bParam0)
{
  if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
  {
    if (bParam0)
    {
      func_311("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
    }
    return false;
  }
  return true;
}