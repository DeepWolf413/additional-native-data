// act_cinema.ysc @ L85856
int func_497(int iParam0)
{
  if (func_501(PLAYER::PLAYER_ID(), iParam0))
  {
    return 1;
  }
  Global_2518253 = { func_500(iParam0) };
  if (NETWORK::NETWORK_IS_FRIEND(&Global_2518253))
  {
    return 1;
  }
  if (func_498(PLAYER::PLAYER_ID(), iParam0))
  {
    return 1;
  }
  return 0;
}