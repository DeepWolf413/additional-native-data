// am_mp_defunct_base.ysc @ L316862
void func_5262(int iParam0)
{
  if ((func_5584() == 1 && func_5583() != 3) || iParam0)
  {
    if (NETWORK::NETWORK_CAN_BAIL())
    {
      if (func_4996() && !func_586(PLAYER::PLAYER_ID()))
      {
        func_5113(2);
      }
      else
      {
        CAM::DO_SCREEN_FADE_OUT(0);
        MISC::SET_BIT(&(Global_2359302.f_1), false);
        NETWORK::NETWORK_BAIL(15, 0, 0);
      }
    }
  }
}