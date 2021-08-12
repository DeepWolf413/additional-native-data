// fishing_core.ysc @ L4803
bool func_155(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;

  if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
  {
    return false;
  }
  if (bParam1)
  {
    if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
    {
      return false;
    }
  }
  if (bParam2)
  {
    if (NETWORK::NETWORK_IS_IN_SESSION())
    {
      iVar0 = iParam0;
      if (iVar0 < 0 || iVar0 >= 32)
      {
        return false;
      }
      if (!Global_1051044.f_1[iVar0])
      {
        return false;
      }
    }
  }
  return true;
}