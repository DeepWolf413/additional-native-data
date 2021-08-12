// mob3.ysc @ L51493
void func_1248()
{
  vector3 vVar0[24];

  LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_BANK_ROBBERY"), LAW::_0x35E5E21F9159849C(joaat("CRIME_BANK_ROBBERY")), 0, true);
  LAW::_0xC5EB2755FA25F1E9(0);
  StringCopy(&cVar0, "LAW_UI_DEAD_OR_ALIVE", 24);
  func_1760(cVar0);
}