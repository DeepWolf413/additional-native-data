// beechers2_2.ysc @ L53372
void func_1240()
{
  func_168(24);
  func_168(26);
  func_168(25);
  func_168(27);
  func_1238();
  func_1651("progress", fLocal_1068);
  func_1651("effort", fLocal_1068);
  TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "lift");
  TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(vLocal_808[2 /*3*/], "lift");
}