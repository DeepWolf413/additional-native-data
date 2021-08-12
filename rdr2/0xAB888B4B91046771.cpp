// satchel_ui_event_handler.ysc @ L7505
void func_236(struct<11> Param0, var uParam11, var uParam12, var uParam13, int iParam14)
{
  int iVar0;
  var uVar1;
  var uVar2;
  bool bVar3;
  int iVar4;

  if (func_161(Param0.f_4, 0))
  {
    iVar0 = func_266(Param0.f_4);
    uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10200, Global_1935689.f_10194);
    uVar2 = uVar1;
    bVar3 = func_520(Param0.f_4);
    if (iParam14 > 0)
    {
      iVar4 = iParam14;
    }
    else
    {
      iVar4 = func_166(func_165(0), Param0.f_4, 0);
    }
    DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar2, iVar0, iVar4, Param0.f_10, bVar3, joaat("COLOR_PURE_WHITE"));
    Global_1935689.f_10194++;
  }
}