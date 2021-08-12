// utopia1.ysc @ L39579
int func_810(char[4] cParam0)
{
  if (func_1359())
  {
    func_47(1, 0);
  }
  if (!func_187(134217728))
  {
    func_470(134217728);
  }
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_419))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_419, false);
  }
  UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
  LAW::_0x55F37F5F3F2475E1();
  LAW::_0x292AD61A33A7A485();
  func_565(&iLocal_518, 8);
  func_164(cParam0, iLocal_419, 1);
  func_135(cParam0, 0);
  func_1305(0, iLocal_518);
  SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
  func_653(&uLocal_279);
  func_198();
  PED::SET_PED_CONFIG_FLAG(iLocal_419, 174, false);
  PED::SET_PED_CONFIG_FLAG(iLocal_420, 174, false);
  return 1;
}