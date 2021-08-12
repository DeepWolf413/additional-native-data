// cheat_ui.ysc @ L530
void func_11(int iParam0)
{
  if (0 == Local_9.f_4[iParam0])
  {
    return;
  }
  if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Local_9.f_4[iParam0], func_6(6)))
  {
    DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_9.f_4[iParam0], func_6(6), 0);
  }
}