// coachrobberies.ysc @ L10906
void func_327(var uParam0, int iParam1)
{
  int iVar0;

  if (!func_205(uParam0->f_9, 0, 1))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
  {
    return;
  }
  TASK::CLEAR_PED_TASKS(uParam0->f_9, true, false);
  PED::_0xF1C03A5352243A30(uParam0->f_9);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_9, false);
  VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1, 6f, 1, false);
  if (!func_205(uParam0->f_174, 0, 1))
  {
    return;
  }
  PED::_0xF1C03A5352243A30(uParam0->f_174);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_174, false);
  TASK::TASK_LOOK_AT_ENTITY(uParam0->f_174, Global_35, -1, 0, 51, 0);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_LEAVE_ANY_VEHICLE(0, 2000, 64);
  TASK::TASK_GOTO_ENTITY_OFFSET_XY(0, uParam0->f_1, -1, 0.5f, 1.4f, -3.4f, 1f, true);
  func_543(0, joaat("WORLD_HUMAN_SMOKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(uParam0->f_174, iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}