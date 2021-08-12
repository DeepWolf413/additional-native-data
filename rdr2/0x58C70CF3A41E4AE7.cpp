// beat_lost_dog.ysc @ L10944
void func_299()
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_459[0 /*3*/], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 0);
  TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_459[1 /*3*/], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 0);
  TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_459[2 /*3*/], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 0);
  TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
  func_311(iLocal_501[0], &iVar0, 0, 0, 1, 1);
}