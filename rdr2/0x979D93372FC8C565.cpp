// rcm_here_kitty_kitty2.ysc @ L28611
void func_961()
{
  TASK::CLEAR_PED_TASKS(iLocal_105, true, false);
  func_931(&iLocal_113, ENTITY::GET_ENTITY_COORDS(iLocal_105, true, false), 0f, 0f, 0f, 10f, 10f, 10f);
  TASK::TASK_ANIMAL_ALERTED(iLocal_105, Global_35, -1);
  PED::_0x2EB75FB86C41F026(iLocal_105, 3, 1);
  PED::_0x23BDE06596A22CEC(iLocal_105, 3, 3f, 0);
  iLocal_112 = 1;
}