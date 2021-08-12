// beat_dead_bodies.ysc @ L13973
void func_443()
{
  int iVar0;

  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::_TASK_MOVE_IN_TRAFFIC_2(iLocal_263[0], -3584.786f, -2586.389f, -15.02154f, 1073741824 /* Float: 2f */, 8f, 0, 0);
  TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_262, -3576.342f, -2605.293f, -14.0057f, 3f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_262), 524423, 2f, 4f);
  func_44(iLocal_263[0], &iVar0, 0, 0, 1, 1);
}