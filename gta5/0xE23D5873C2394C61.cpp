// director_mode.ysc @ L122449
void func_822(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, int iParam6)
{
  int iVar0;
  
  PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, true, bParam5, bParam4);
  iVar0 = (MISC::GET_GAME_TIMER() + iParam6);
  while (!(PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()) || iVar0 < MISC::GET_GAME_TIMER()))
  {
    SYSTEM::WAIT(0);
  }
}