// loanshark_horsechase1.ysc @ L2141
void func_69()
{
  int iVar0;

  func_219(&uLocal_602, 750.1129f, 723.1831f, 113.1959f, 0);
  VEHICLE::_0xE6C5E2125EB210C1(joaat("TRAINS3"), 2, 1);
  VEHICLE::SET_TRAIN_SPEED(uLocal_602[0], 0f);
  VEHICLE::SET_TRAIN_CRUISE_SPEED(uLocal_602[0], 0f);
  func_220(iLocal_598, 5f);
  iVar0 = 2054;
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_613);
  if (func_215(8192))
  {
    TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_623, 0, iVar0 | 8, -1, 0, 0, -1);
  }
  else
  {
    TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_623, 0, iVar0, -1, 0, 0, -1);
  }
  TASK::CLOSE_SEQUENCE_TASK(iLocal_613);
  TASK::TASK_PERFORM_SEQUENCE(Local_65[0 /*75*/], iLocal_613);
  TASK::CLEAR_SEQUENCE_TASK(&iLocal_613);
  func_221(&(Local_65[0 /*75*/].f_57[0 /*17*/]));
  func_221(&(Local_65[1 /*75*/].f_57[0 /*17*/]));
  func_64(4194304);
  iLocal_626 = 0;
}