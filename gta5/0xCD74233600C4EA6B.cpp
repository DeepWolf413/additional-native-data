// am_penned_in.ysc @ L18314
void func_491()
{
  if (!MISC::IS_BIT_SET(iLocal_541, 19))
  {
    func_499();
    HUD::_0xCD74233600C4EA6B(false);
    if (func_498("SCTV_HELI_HLP"))
    {
      HUD::CLEAR_HELP(true);
    }
    func_493(&(Local_84.f_184), 1, MISC::IS_BIT_SET(Local_84.f_1, 5), 0);
    if (!func_373(PLAYER::PLAYER_ID(), 0))
    {
      MISC::CLEAR_BIT(&(Local_283[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/].f_1), 11);
      MISC::CLEAR_BIT(&(Global_2426865[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*449*/].f_199), 2);
      MISC::CLEAR_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_1), 14);
      func_492(PLAYER::PLAYER_ID(), 0);
    }
    MISC::SET_BIT(&iLocal_541, 19);
  }
}