// selector.ysc @ L103850
int func_839()
{
  if (!Global_1312392[0] && !STATS::STAT_SLOT_IS_LOADED(0))
  {
    if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      if (((STATS::_0xDEAAF77EB3687E97(2, &Global_2465180) == 0 || STATS::_0xDEAAF77EB3687E97(0, &Global_2465302) == 0) || STATS::_0xDEAAF77EB3687E97(1, &Global_2465546) == 0) || STATS::_0xDEAAF77EB3687E97(3, &Global_2465424) == 0)
      {
        return 1;
      }
      if (STATS::_0x9A62EC95AE10E011() == 13)
      {
        return 0;
      }
    }
  }
  return 1;
}