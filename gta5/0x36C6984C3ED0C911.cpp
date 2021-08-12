// player_timetable_scene.ysc @ L78446
void func_453(int iParam0, int iParam1)
{
  var uVar0;
  
  if (Global_96760[iParam1 /*29*/].f_16)
  {
    if (ENTITY::IS_ENTITY_IN_WATER(iParam0) || WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1, &uVar0) == 1)
    {
      PED::_SET_PED_SCUBA_GEAR_VARIATION(iParam0);
      PED::SET_ENABLE_SCUBA(iParam0, true);
    }
    else
    {
      PED::CLEAR_PED_SCUBA_GEAR_VARIATION(iParam0);
      PED::SET_ENABLE_SCUBA(iParam0, false);
    }
    Global_96760[iParam1 /*29*/].f_16 = 0;
  }
}