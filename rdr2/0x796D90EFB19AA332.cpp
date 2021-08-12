// rcm_mudtown3_2.ysc @ L5285
bool func_210()
{
  if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
  {
    if (PED::IS_PED_IN_MODEL(Global_35, joaat("OILWAGON01X")) || PED::IS_PED_IN_MODEL(Global_35, joaat("OILWAGON02X")))
    {
      return true;
    }
  }
  return false;
}