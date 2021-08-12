// winter1.ysc @ L17845
void func_165(bool bParam0, bool bParam1)
{
  PED::_SET_PED_BRAWLING_STYLE(Global_35, joaat("BS_PLAYER"));
  MISC::_REMOVE_STEALTH_KILL(joaat("ACT_HITBY_TRANS_TO_INTIMIDATION_ONKNEE"), true);
  PED::_0x949B2F9ED2917F5D(Global_35, 30);
  PED::_0x949B2F9ED2917F5D(Global_35, 31);
  PED::_0x949B2F9ED2917F5D(Global_35, 18);
  if (PED::_0x0D3B1568917EBDA0(Global_35, 10))
  {
    PED::_0x7C10221CE718AA72(Global_35, 10);
  }
  if (bParam0)
  {
    func_463(1);
  }
  if (bParam1)
  {
    func_464(&iLocal_1048);
  }
  func_465(&uLocal_1315);
  func_465(&uLocal_1318);
  func_465(&uLocal_1321);
  func_465(&uLocal_1324);
}