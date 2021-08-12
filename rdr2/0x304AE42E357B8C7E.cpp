// beat_torch_procession.ysc @ L2026
void func_57()
{
  func_181();
  if (!func_186(&uLocal_381))
  {
    func_187(&uLocal_381, 0);
  }
  else if (func_188(&uLocal_381) > 7f)
  {
  }
  if (iLocal_526 == 0)
  {
    TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_313[0], 1f, 2048, 0);
    iLocal_526 = 1;
  }
  if (iLocal_527 == 0)
  {
    TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_313[1], uLocal_313[0], 0.9f, 0f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
    iLocal_527 = 1;
  }
}