// act_cajav_homerob1.ysc @ L18917
void func_572(int iParam0, int iParam1, char* sParam2, float fParam3, char* sParam4)
{
  if (!func_29(iParam0, 0) || !func_29(iParam1, 0))
  {
    return;
  }
  TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iParam0, sParam2, fParam3, 0, 8, -1, 0);
  PED::FORCE_PED_MOTION_STATE(iParam1, joaat("MOTIONSTATE_RUN"), true, 0, false);
  PED::_0x2208438012482A1A(iParam1, false, false);
  PED::_0x2208438012482A1A(iParam0, false, false);
}