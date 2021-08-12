// hideout_thieveslanding.ysc @ L2662
void func_70()
{
  if (!func_175(32768))
  {
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[0 /*9*/].f_5, joaat("WORLD_HUMAN_GUARD_SCOUT"), Local_854[0 /*9*/].f_1, Local_854[0 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[1 /*9*/].f_5, joaat("WORLD_HUMAN_GUARD_SCOUT"), Local_854[1 /*9*/].f_1, Local_854[1 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[2 /*9*/].f_5, joaat("WORLD_HUMAN_GUARD_SCOUT"), Local_854[2 /*9*/].f_1, Local_854[2 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[6 /*9*/].f_5, joaat("WORLD_HUMAN_SMOKE"), Local_854[6 /*9*/].f_1, Local_854[6 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[7 /*9*/].f_5, joaat("PROP_HUMAN_SEAT_CHAIR"), Local_854[7 /*9*/].f_1, Local_854[7 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[8 /*9*/].f_5, joaat("WORLD_HUMAN_SMOKE"), Local_854[8 /*9*/].f_1, Local_854[8 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::OPEN_SEQUENCE_TASK(&iLocal_1232);
    TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_DRINKING_DRUNK"), Local_854[9 /*9*/].f_1, Local_854[9 /*9*/].f_4, 15000, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_DRINKING_DRUNK"), -1394.35f, -2333.85f, 41.76f, -82.49f, 15000, true, false, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_DRINKING_DRUNK"), Local_854[9 /*9*/].f_1, Local_854[9 /*9*/].f_4, -1, true, false, 0, -1f, false);
    func_177(Local_854[9 /*9*/].f_5, &iLocal_1232, 0, 0, 1, 1);
    TASK::TASK_PATROL(Local_854[3 /*9*/].f_5, func_178(3), 1, false, true);
    TASK::TASK_PATROL(Local_854[4 /*9*/].f_5, func_178(4), 1, false, true);
    TASK::TASK_PATROL(Local_854[5 /*9*/].f_5, func_178(5), 1, false, true);
  }
  else
  {
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[0 /*9*/].f_5, joaat("WORLD_HUMAN_GUARD_SCOUT"), Local_854[0 /*9*/].f_1, Local_854[0 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[1 /*9*/].f_5, joaat("WORLD_HUMAN_GUARD_SCOUT"), Local_854[1 /*9*/].f_1, Local_854[1 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[2 /*9*/].f_5, joaat("WORLD_HUMAN_GUARD_SCOUT"), Local_854[2 /*9*/].f_1, Local_854[2 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[6 /*9*/].f_5, joaat("WORLD_HUMAN_SIT_FALL_ASLEEP"), Local_854[6 /*9*/].f_1, Local_854[6 /*9*/].f_4, -1, false, true, "WORLD_HUMAN_SIT_GROUND_TIRED_MALE_A", -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[7 /*9*/].f_5, joaat("WORLD_HUMAN_SLEEP_GROUND_ARM"), -1415.56f, -2336.36f, 42.18f, -161.31f, -1, false, true, "WORLD_HUMAN_SLEEP_GROUND_ARM_MALE_B", -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[8 /*9*/].f_5, joaat("WORLD_HUMAN_SMOKE"), Local_854[8 /*9*/].f_1, Local_854[8 /*9*/].f_4, -1, false, true, 0, -1f, false);
    TASK::TASK_START_SCENARIO_AT_POSITION(Local_854[9 /*9*/].f_5, joaat("WORLD_HUMAN_SIT_FALL_ASLEEP"), -1411.56f, -2337.05f, 42.19f, -178.15f, -1, false, true, "WORLD_HUMAN_SIT_GROUND_TIRED_MALE_A", -1f, false);
    TASK::TASK_PATROL(Local_854[3 /*9*/].f_5, func_178(3), 1, false, true);
    TASK::TASK_PATROL(Local_854[4 /*9*/].f_5, func_178(4), 1, false, true);
    TASK::TASK_PATROL(Local_854[5 /*9*/].f_5, func_178(5), 1, false, true);
  }
}