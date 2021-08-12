// abigail2_1.ysc @ L24886
bool func_421(char[4] cParam0)
{
  bool bVar0;

  bVar0 = (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_TELEPORT_ACTIVE());
  if (func_866(&(cParam0->f_603)) >= cParam0->f_13144)
  {
    bVar0 = true;
  }
  if (bVar0)
  {
    if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
    {
      PLAYER::STOP_PLAYER_TELEPORT();
    }
    if ((func_82(32768) && func_867()) && func_866(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
    {
      return false;
    }
    if (func_120(cParam0, 8) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_125(cParam0->f_607))))
    {
      INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(func_125(cParam0->f_607)));
      func_257(cParam0, 8);
    }
    CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
    func_868(0, 0);
    func_257(cParam0, 4096);
    return true;
  }
  return false;
}