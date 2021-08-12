// am_casino_limo.ysc @ L16615
void func_325(int* iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
  bool bVar0;
  
  if (!iParam0->f_386)
  {
    return;
  }
  if (!bParam2)
  {
    func_356(iParam0);
  }
  if (bParam3)
  {
    func_327(1, 0, bParam4, bParam5);
  }
  bVar0 = SCRIPT::GET_NO_LOADING_SCREEN();
  if (!bParam1)
  {
    func_307(PLAYER::PLAYER_ID(), 1, 524288, 0);
  }
  if (SCRIPT::GET_NO_LOADING_SCREEN() != bVar0)
  {
    SCRIPT::SET_NO_LOADING_SCREEN(bVar0);
  }
  func_326(iParam0);
  MISC::CLEAR_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_531), false);
  Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_531.f_1 = 0;
}