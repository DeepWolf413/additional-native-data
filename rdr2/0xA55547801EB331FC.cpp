// braithwaites2.ysc @ L72747
void func_1896(vector3 vParam0, vector3 vParam3, bool bParam6)
{
  int iVar0;

  PED::REMOVE_PED_DEFENSIVE_AREA(bLocal_785, false);
  PED::SET_PED_SPHERE_DEFENSIVE_AREA(bLocal_785, vParam0, 3f, 1, 0, 0);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_785, true);
  TASK::CLEAR_PED_TASKS(bLocal_785, true, false);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (!bParam6)
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam0, 2f, 40000, 5f, 1, 40000f);
    TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, vParam0, vParam3, 2f, true, 0.5f, 3f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
  }
  else
  {
    TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, vParam0, vParam3, 2f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
  }
  TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, vParam0, 100f, 0, 0);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(bLocal_785, iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}