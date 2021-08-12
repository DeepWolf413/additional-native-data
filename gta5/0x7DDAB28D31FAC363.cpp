// am_pi_menu.ysc @ L429478
void func_6128(int iParam0, bool bParam1)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (iParam0 == -1)
    {
      iParam0 = func_67(455, -1, -1);
    }
    else if (bParam1)
    {
      func_66(455, iParam0, -1, 1);
    }
  }
  PLAYER::SET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID());
  func_6129(PLAYER::PLAYER_ID(), iParam0, 0);
}