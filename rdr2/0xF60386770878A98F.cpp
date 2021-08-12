// ambush_pnk_type1.ysc @ L4404
void func_170()
{
  int iVar0;

  LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER_LAW"), 1000, 0, true);
  func_318(1000);
  func_196(1);
  iVar0 = 0;
  while (iVar0 <= 5)
  {
    if (func_61(Local_15[iVar0], 0, 0))
    {
      PED::_0x8ACC0506743A8A5C(Local_15[iVar0], joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
    }
    iVar0++;
  }
  func_191(&(Local_274.f_218[0]));
  func_198(1);
}