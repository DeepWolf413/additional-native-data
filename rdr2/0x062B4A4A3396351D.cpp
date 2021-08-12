// law_arrest.ysc @ L1316
void func_37()
{
  int iVar0;

  iVar0 = func_99();
  if (func_100(Global_1934266.f_63) && Global_1934266.f_63 != iVar0)
  {
    func_139(Global_1934266.f_63);
    func_140(Global_1934266.f_63);
    func_141(Global_1934266.f_63, 0);
    func_140(iVar0);
  }
  else
  {
    func_139(Global_1934266.f_63);
    func_140(Global_1934266.f_63);
  }
  LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
}