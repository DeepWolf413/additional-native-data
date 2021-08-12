// beat_domestic_dispute.ysc @ L3694
void func_128()
{
  if (!func_198(Local_485.f_1))
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_485.f_1, (1f + 0.05f), -1, 0.25f, 1, 40000f);
  }
  if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_485) && !TASK::IS_SCENARIO_OCCUPIED(Local_485.f_4, 0.5f, true))
  {
    TASK::_TASK_USE_SCENARIO_POINT(0, Local_485, 0, 0, true, false, 0, false, -1f, false);
  }
  else
  {
    TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Local_485.f_4, 15f, 0, false, false, false, false);
  }
}