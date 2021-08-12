// rcm_calderon2.ysc @ L10475
void func_325()
{
  vector3 vVar0[24];
  struct<12> Var3;

  LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 500, iLocal_305, true);
  StringCopy(&cVar0, "LAW_UI_DEAD_OR_ALIVE", 24);
  func_721(cVar0);
  Var3.f_9 = -1082130432;
  Var3.f_10 = -1082130432;
  Var3.f_11 = -1082130432;
  Var3.f_6 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, true, false) };
  LAW::_0xC687A23E166DCF68(&Var3);
  PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_306, 39, true);
}