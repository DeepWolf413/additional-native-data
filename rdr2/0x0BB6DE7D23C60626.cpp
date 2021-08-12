// beat_drunk_dueler.ysc @ L22549
bool func_629(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
  if (func_112(iParam0, bParam1, bParam2, bParam3))
  {
    return true;
  }
  if (bParam1)
  {
    if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
    {
      return true;
    }
  }
  return false;
}