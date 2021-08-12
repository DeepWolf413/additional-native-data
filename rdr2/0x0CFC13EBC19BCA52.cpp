// beat_taunting.ysc @ L10251
void func_315(int iParam0, var uParam1, bool bParam2)
{
  int iVar0;

  if (!func_71(iParam0, 0, 1))
  {
    return;
  }
  if (bParam2)
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_STAND_STILL(0, 200);
    TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(0, uParam1);
    func_495(iParam0, &iVar0, 0.2f, 0.2f, 1, 1);
  }
  else
  {
    TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(iParam0, uParam1);
  }
}