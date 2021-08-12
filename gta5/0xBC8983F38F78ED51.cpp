// arena_carmod.ysc @ L4505
void func_45(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
    if (!func_23(iParam0, 6, 1))
    {
      func_43(iParam0, 6, 1);
      Global_99422.f_364++;
      if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
      {
        PLAYER::FORCE_CLEANUP(8);
      }
    }
  }
  else if (func_23(iParam0, 6, 1))
  {
    func_41(iParam0, 6, 1);
    if (Global_99422.f_364 > 0)
    {
      Global_99422.f_364 = (Global_99422.f_364 - 1);
    }
    BRAIN::_0x6D6840CEE8845831("act_cinema");
  }
}