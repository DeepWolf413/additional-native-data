// bounty1.ysc @ L33880
bool func_752(var uParam0)
{
  TASK::_0xFF745B0346E19E2C(func_1272());
  if (!TASK::_0xB8F52A3F84A7CC59(func_1272()))
  {
    return false;
  }
  if (!func_1229(uParam0, &iLocal_115, func_208(5, 1), 2))
  {
    return false;
  }
  func_1177(Global_35, func_208(5, 0), 2, 1073741824 /* Float: 2f */);
  func_1177(iLocal_111, func_208(5, 2), 2, 1073741824 /* Float: 2f */);
  iLocal_202 = 3;
  PED::_SET_PED_ON_MOUNT(Global_35, iLocal_115, -1, true);
  TASK::TASK_CARRIABLE(iLocal_111, func_1272(), iLocal_115, 0, 0);
  return uParam0->f_607 == uParam0->f_607;
}