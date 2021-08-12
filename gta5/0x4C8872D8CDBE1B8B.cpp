// assassin_bus.ysc @ L24971
void func_484(int iParam0, struct<3> Param1, struct<3> Param4)
{
  PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0, false);
  PED::CLEAR_PED_NON_CREATION_AREA();
  PATHFIND::DISABLE_NAVMESH_IN_AREA(Param1, Param4, 0);
}