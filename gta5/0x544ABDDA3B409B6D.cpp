// am_challenges.ysc @ L23939
int func_696(int iParam0)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (func_14(iParam0, 0))
    {
      return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
    }
  }
  return 0;
}