// beat_booby_trap.ysc @ L24366
void func_811(int iParam0, float fParam1)
{
  if (!func_526(iParam0, Global_35, 12f, 1))
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Global_36, 2f, -1, 12f, 0, 40000f);
  }
  TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, fParam1, 0, 3.5f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
}