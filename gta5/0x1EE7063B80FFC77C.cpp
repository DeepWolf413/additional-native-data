// agency_heist1.ysc @ L114993
void func_744(int iParam0, struct<3> Param1, struct<3> Param4)
{
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
  PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Param1, Param4, 1);
  PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Param1, Param4, 0);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Param1, Param4, true, true);
}