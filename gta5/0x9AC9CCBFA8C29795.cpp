// appjipmp.ysc @ L5259
int func_125(int iParam0)
{
  if (!func_126(iParam0) && !NETWORK::NETWORK_HAS_PLAYER_STARTED_TRANSITION(iParam0))
  {
    return 1;
  }
  return 0;
}