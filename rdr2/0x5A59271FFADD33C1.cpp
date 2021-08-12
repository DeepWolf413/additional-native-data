// beat_hostage_rescue.ysc @ L6957
void func_211()
{
  if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_84[3 /*32*/].f_6, 1f, true, 0, false))
  {
    TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_510[3], Local_84[3 /*32*/].f_6, 1f, -1, false, false, false, false);
  }
  else
  {
    func_443(iLocal_510[3], joaat("WORLD_HUMAN_SMOKE"), Local_84[3 /*32*/].f_6, Local_84[3 /*32*/].f_9, -1, 0, 1, 0, -1082130432 /* Float: -1f */);
  }
}