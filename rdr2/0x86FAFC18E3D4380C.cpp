// loanshark_hunter.ysc @ L2272
void func_72()
{
  TASK::TASK_CLEAR_LOOK_AT(iLocal_143);
  TASK::CLEAR_PED_TASKS(iLocal_143, true, false);
  TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_143, true);
  TASK::_0x9DE63896B176EA94(iLocal_143, 1);
  TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_143, false, 1f);
  if (!PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
  {
    PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_143, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
    PED::_0x86FAFC18E3D4380C(iLocal_267, 0);
    PLAYER::_0xDD33A82352C4652F(PLAYER::GET_PLAYER_INDEX(), iLocal_143, 3);
  }
  func_248(1);
  if (iLocal_19 == 1)
  {
    TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2060, -1, 0, 0, -1);
  }
  else
  {
    TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2062, -1, 0, 0, -1);
  }
  func_249(4);
}