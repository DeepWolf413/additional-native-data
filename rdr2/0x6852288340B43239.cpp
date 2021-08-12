// rcm_war_veteran4.ysc @ L9574
void func_326()
{
  TASK::CLEAR_PED_TASKS(vLocal_187.x, true, false);
  TASK::TASK_FOLLOW_WAYPOINT_RECORDING(vLocal_187.x, sLocal_97, 0, 4194412, -1, 0, 0, -1);
  PED::FORCE_PED_MOTION_STATE(vLocal_187.x, joaat("MOTIONSTATE_RUN"), false, 0, false);
  PED::_0x2208438012482A1A(vLocal_187.x, false, false);
  PLAYER::_0x6852288340B43239(PLAYER::GET_PLAYER_INDEX(), vLocal_187.x);
  func_525(4);
}