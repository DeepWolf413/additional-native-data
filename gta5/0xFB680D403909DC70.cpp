// fm_content_island_heist.ysc @ L164427
int func_3254(int iParam0)
{
  if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() && !NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
  {
    NETWORK::_0xFB680D403909DC70(1, iParam0);
    NETWORK::_0x3C5C1E2C2FF814B1(true);
  }
  if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
  {
    return 0;
  }
  return 1;
}