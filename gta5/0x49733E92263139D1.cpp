// agency_heist1.ysc @ L100612
bool func_522(struct<3> Param0, float fParam3, bool bParam4, bool bParam5)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1012))
  {
    func_445(&iLocal_1012, 0, Param0, fParam3, 1, 0);
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1012, false))
  {
    if (bParam5)
    {
      if (!PED::IS_PED_INJURED(iLocal_1006))
      {
        if (!PED::IS_PED_IN_VEHICLE(iLocal_1006, iLocal_1012, false))
        {
          PED::SET_PED_INTO_VEHICLE(iLocal_1006, iLocal_1012, 0);
        }
      }
    }
    if (bParam4)
    {
      if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1012, false))
      {
        PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1012, -1);
      }
    }
    ENTITY::SET_ENTITY_COORDS(iLocal_1012, Param0, true, false, false, true);
    ENTITY::SET_ENTITY_HEADING(iLocal_1012, fParam3);
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1012, 5f);
    ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_1012, 2, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
  }
  return ENTITY::DOES_ENTITY_EXIST(iLocal_1012);
}