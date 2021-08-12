// am_mp_arena_garage.ysc @ L289740
void func_4668()
{
  if (Local_320.f_396 == PLAYER::PLAYER_ID())
  {
    if (((((((!MISC::IS_BIT_SET(Global_1683818, 18) && !MISC::IS_BIT_SET(Local_320, 17)) && func_180() == 0) && CAM::IS_SCREEN_FADED_IN()) && !func_106(Local_320.f_396)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !NETWORK::IS_PLAYER_IN_CUTSCENE(PLAYER::PLAYER_ID()))
    {
      if (!func_4670(25015))
      {
        func_4669(25015);
        func_1054("ACW_REMIND_HELP", -1);
      }
      MISC::SET_BIT(&Global_1683818, 18);
    }
  }
}