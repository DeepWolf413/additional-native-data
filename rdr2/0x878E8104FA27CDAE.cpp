// feud1.ysc @ L37105
int func_782(char[4] cParam0)
{
  func_1299(func_33(cParam0), &iLocal_1043);
  PED::_0x878E8104FA27CDAE(VEHICLE::GET_TRAIN_CARRIAGE(bLocal_110, 12), joaat("FEUD1_JUMP_FLATCAR"));
  if (!PED::IS_PED_INJURED(Local_160))
  {
    func_1342(Local_160);
    PED::_0x1E017404784AA6A3(Local_160, joaat("FUD1_RIDE1_ARCHIBALD"));
  }
  AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
  AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
  AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
  func_182(&iLocal_1044, 8388608);
  func_183(&iLocal_1044, 33554432);
  func_183(&iLocal_1044, 8192);
  func_135(cParam0, 2);
  return 1;
}