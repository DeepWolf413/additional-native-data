// am_mp_defunct_base.ysc @ L94913
void func_1090()
{
  if (!MISC::IS_BIT_SET(Local_3288.f_1, 5))
  {
    if (func_958(PLAYER::PLAYER_PED_ID()))
    {
      Local_3288.f_397 = 1;
    }
    func_979();
    func_1093(0, 0, 1, 0, 0, 1, 0);
    NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
    HUD::_THEFEED_DISABLE_LOADING_SCREEN_TIPS();
    func_967();
    func_1092();
    func_1091(Local_3288.f_394);
    Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_419 = 1;
    Local_3288.f_1032 = 0;
    MISC::SET_BIT(&(Local_3288.f_1), 5);
  }
}