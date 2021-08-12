// mary3.ysc @ L34154
bool func_732(char[4] cParam0)
{
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1223[4]))
  {
    if (!PATHFIND::_0xDE0EA444735C1368(iLocal_1223[4]))
    {
      PATHFIND::_0x19C7567D2F2287D6(iLocal_1223[4], 7);
    }
    uLocal_1288 = func_383(iLocal_1223[4], 0, 0, 0);
    func_877(iLocal_1223[4], 0, 0);
    MISC::_0x2FCD528A397E5C88(iLocal_1223[4], 16408);
    MISC::_0x2FCD528A397E5C88(iLocal_1223[4], 16384);
  }
  func_888(-596723840);
  func_888(-1762770596);
  VEHICLE::_0xCF9DA72002FC16BF(Local_530[0 /*178*/], iLocal_1202, 35);
  func_151(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
  func_151(cParam0, Local_530[0 /*178*/], "MaryLinton", 0, 0, 0, 0);
  func_151(cParam0, iLocal_1202, "Horse_01", 0, 0, 0, 0);
  return cParam0->f_607 == cParam0->f_607;
}