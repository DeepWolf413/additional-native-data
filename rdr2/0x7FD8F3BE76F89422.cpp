// bandana.ysc @ L353
void func_8(int iParam0)
{
  int iVar0;
  var uVar1;

  if (!func_21(&iVar0))
  {
    return;
  }
  if (func_22(&uVar1))
  {
    return;
  }
  PED::_0x2208438012482A1A(iParam0, false, false);
  PED::_0xC494C76A34266E82(iParam0, 0);
  if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_EQUIPPED_MASK"), iParam0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1) > 0)
  {
  }
  func_26(iVar0, 1);
  func_27(26, 0, 0, 0, 0);
}