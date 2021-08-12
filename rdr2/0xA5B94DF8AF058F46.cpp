// loanshark_soldier.ysc @ L17370
void func_596(int iParam0)
{
  if (PED::_IS_PED_HOGTIED(Local_60[iParam0 /*43*/]) && !func_1120(Global_35))
  {
    func_1121(iParam0);
    return;
  }
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_60[iParam0 /*43*/], 0))
  {
    if (!TASK::WAYPOINT_PLAYBACK_GET_IS_SHOOTING(Local_60[iParam0 /*43*/]))
    {
      TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Local_60[iParam0 /*43*/], Global_35, 1, 0, -1082130432 /* Float: -1f */);
    }
    TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_60[iParam0 /*43*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
  }
  if (!func_496(Local_60[iParam0 /*43*/]))
  {
    TASK::CLEAR_PED_TASKS(Local_60[iParam0 /*43*/], true, false);
    func_602(iParam0);
  }
}