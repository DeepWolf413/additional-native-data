// ambush_inb_bridge_ambush.ysc @ L1596
void func_49()
{
  if (func_61(Local_15[2], 0, 0))
  {
    if (!func_18(&Global_1393447, 65536))
    {
      func_195(&Local_15, 2, 2);
    }
    if (func_137(&Local_15, 2, 2))
    {
      TASK::_TASK_FLEE_FROM_COORD(Local_15[2], Local_15.f_209, 0f, 0f, 0f, 300f, -1, 294912, 2f, 0);
    }
  }
  func_175();
}