// abigail2_1_intro.ysc @ L1182
void func_37(int iParam0)
{
  int iVar0;
  var uVar1;

  if (func_151(iParam0))
  {
    return;
  }
  iVar0 = func_32(func_31(iParam0));
  if (!func_30(iVar0))
  {
    return;
  }
  func_22(iVar0, 2048);
  Global_1835011[iParam0 /*74*/].f_71 = 0;
  uVar1 = func_152(iParam0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
  {
    HUD::SET_MISSION_NAME(true, &uVar1);
    MISC::_0x1096603B519C905F(&uVar1);
  }
}