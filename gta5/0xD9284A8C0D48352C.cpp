// am_casino_peds.ysc @ L207050
void func_2014(bool bParam0, int iParam1, int iParam2)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_2018();
    if (iParam2 == -1)
    {
      iParam2 = func_396(2042, -1, 0);
    }
    PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(bParam0, 5, func_1938(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_1937(PLAYER::GET_PLAYER_PED(bParam0), iParam2), false);
    PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(bParam0, func_1936(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
    PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(bParam0), 5, func_1938(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_1937(PLAYER::GET_PLAYER_PED(bParam0), iParam2), func_1936(PLAYER::GET_PLAYER_PED(bParam0), iParam2));
    if (iParam1 == -1)
    {
      iParam1 = func_396(586, -1, 0);
    }
    if (func_1681(1) && func_2052(bParam0))
    {
      func_2015(bParam0, func_2017(Global_2553660), 0);
    }
    else
    {
      func_2015(bParam0, iParam1, 0);
    }
    if (MISC::IS_BIT_SET(Global_4456448.f_28, 4))
    {
      func_2015(bParam0, Global_1574453, 1);
    }
    func_1935(bParam0, iParam2);
    PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(bParam0), 177, true);
  }
}