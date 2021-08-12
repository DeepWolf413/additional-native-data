// mudtown4.ysc @ L44131
bool func_909(char[4] cParam0)
{
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_121[1], true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_121[0], true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_121[2], true);
  func_198(&uLocal_43, iLocal_228[26], 0);
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_228[66]))
  {
    MISC::_0x2FCD528A397E5C88(iLocal_228[66], 8);
    uLocal_45 = func_1389(iLocal_228[66], 0, 0, 0);
    func_1391(iLocal_228[66], 0, 0);
  }
  LAW::_0xD6C0A8C7C0B2F82C(PLAYER::GET_PLAYER_INDEX(), 0);
  func_1059(cParam0);
  func_1621(16384);
  return cParam0->f_607 == cParam0->f_607;
}