// satchel_ui_event_handler.ysc @ L591
void func_16(int iParam0, var uParam1, var uParam2)
{
  int iVar0;
  var uVar1;

  func_98();
  if (func_15())
  {
    func_17(0);
    if (Global_1935689.f_7)
    {
      uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10200, Global_1935689.f_10195);
    }
    else
    {
      uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10199, Global_1935689.f_10195);
    }
    iVar0 = func_99(uVar1);
  }
  else
  {
    iVar0 = func_99(*uParam1);
  }
  func_100(iVar0, uParam1, uParam2);
  func_101(0, iVar0);
  func_98();
  func_97(iParam0);
}