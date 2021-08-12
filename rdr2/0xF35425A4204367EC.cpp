// gang2.ysc @ L73847
void func_1935(int iParam0)
{
  vector3 vVar0;
  int iVar3;

  if (func_172(Local_14.f_86[iParam0], 0))
  {
    TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_14.f_86[iParam0], false, 1f);
    TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_14.f_86[iParam0], true);
    TASK::_0x9DE63896B176EA94(Local_14.f_86[iParam0], 1);
  }
  if (func_172(Local_14.f_86[iParam0 + 1], 0))
  {
    TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_14.f_86[iParam0 + 1], false, 1f);
    TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_14.f_86[iParam0 + 1], true);
    TASK::_0x9DE63896B176EA94(Local_14.f_86[iParam0 + 1], 1);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_86[iParam0 + 1], true);
  }
  vVar0 = { func_1937(iParam0) };
  TASK::OPEN_SEQUENCE_TASK(&iVar3);
  TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, vVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1.75f, true, 0.5f, 4f, true, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
  TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
  TASK::CLOSE_SEQUENCE_TASK(iVar3);
  TASK::TASK_PERFORM_SEQUENCE(Local_14.f_86[iParam0], iVar3);
  TASK::CLEAR_SEQUENCE_TASK(&iVar3);
  func_1923(Local_14.f_86[iParam0], vVar0, 5f, 0, 0);
}