// beat_posse_breakout.ysc @ L2418
void func_70(bool bParam0, bool bParam1)
{
  if (func_62(iLocal_1041[4], 0, 1))
  {
    if (func_37(iLocal_979, 2097152))
    {
      COMPANION::_0x1740E3DEE0AE4D27(iLocal_1041[4], iLocal_1137);
    }
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1041[4], false);
    if (bParam1)
    {
      func_234(iLocal_1041[4], 8);
    }
    if (func_37(iLocal_979, 16))
    {
      PED::_0x73B6F907B913C860(iLocal_1041[4], fLocal_1028);
    }
  }
  func_155(iLocal_1041[4], iLocal_548, 1);
  func_235(&(Local_632[4 /*21*/]), &Local_801);
  func_43(&iLocal_957, 256);
  if (func_236(iLocal_548))
  {
    func_237(iLocal_548);
  }
  func_238(iLocal_548, 0, bParam0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
}