// startup_sp.ysc @ L1347
void func_53(int iParam0)
{
  func_118(Global_2621440[iParam0 /*12066*/].f_9.f_14);
  LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
  LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
  COMPAPP::_0xCCB4635A071FB62D();
  if (Global_40.f_9.f_20 > 0)
  {
    LAW::_0x0E3BDEED21BEB945(PLAYER::GET_PLAYER_INDEX(), Global_40.f_9.f_20);
  }
}