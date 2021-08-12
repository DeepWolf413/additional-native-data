// act_cinema.ysc @ L120089
int func_1250()
{
  int iVar0;
  
  iVar0 = 0;
  while (true)
  {
    iVar0++;
    if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      return 0;
    }
    if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
    {
      return 1;
    }
    if (func_1210())
    {
      return 0;
    }
    if (func_1208(157))
    {
      return 0;
    }
    if (iVar0 >= 3600)
    {
      return 0;
    }
    SYSTEM::WAIT(0);
  }
  return 0;
}