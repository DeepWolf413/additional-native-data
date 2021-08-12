// act_cinema.ysc @ L93801
int func_628(int iParam0)
{
  if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
  {
    return !func_121(NETWORK::NET_TO_VEH(iParam0));
  }
  return 0;
}