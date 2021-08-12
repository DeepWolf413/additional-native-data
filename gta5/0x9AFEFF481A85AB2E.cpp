// armenian3.ysc @ L27293
void func_117(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (iParam5 == 1)
      {
        PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, Param1);
      }
      else
      {
        ENTITY::SET_ENTITY_COORDS(iParam0, Param1, true, false, false, true);
      }
      PED::CLEAR_PED_WETNESS(iParam0);
      ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
    }
  }
}