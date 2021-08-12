// fmmc_launcher.ysc @ L431829
int func_7184()
{
  if (func_7186())
  {
    if (!func_7185())
    {
      if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
      {
        return 0;
      }
      if (func_146() && NETWORK::NETWORK_GET_ACTIVITY_PLAYER_NUM(true) <= 0)
      {
        return 1;
      }
      if (NETWORK::NETWORK_GET_ACTIVITY_PLAYER_NUM(false) > 1)
      {
        return 0;
      }
    }
  }
  return 1;
}