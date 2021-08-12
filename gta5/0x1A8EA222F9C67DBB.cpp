// am_challenges.ysc @ L10521
void func_308(float fParam0)
{
  float fVar0;
  
  if (STATS::_0x1A8EA222F9C67DBB(&fVar0))
  {
    if (fVar0 > fParam0)
    {
      func_545(6);
      if (!MISC::IS_BIT_SET(iLocal_319, 4))
      {
        AUDIO::PLAY_SOUND_FRONTEND(iLocal_327, "Altitude_Warning", "EXILE_1", true);
        MISC::SET_BIT(&iLocal_319, 4);
      }
    }
    else
    {
      if (func_296("AMCH_FLYLOW"))
      {
        HUD::CLEAR_HELP(true);
      }
      if (MISC::IS_BIT_SET(iLocal_319, 4))
      {
        AUDIO::STOP_SOUND(iLocal_327);
        MISC::CLEAR_BIT(&iLocal_319, 4);
      }
    }
  }
}