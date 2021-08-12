// agency_heist1.ysc @ L112622
void func_730(int iParam0, struct<3> Param1, struct<3> Param4)
{
  PATHFIND::SET_PED_PATHS_IN_AREA(Param1, Param4, false, 0);
  PATHFIND::SET_ROADS_IN_AREA(Param1, Param4, false, true);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Param1, Param4, false, true);
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
  iParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Param1, Param4, false, true, true, true);
}