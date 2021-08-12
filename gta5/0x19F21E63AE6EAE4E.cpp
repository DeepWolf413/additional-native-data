// am_challenges.ysc @ L25107
void func_750()
{
  if (MISC::IS_BIT_SET(Global_2544210.f_5028, true))
  {
    MISC::CLEAR_BIT(&(Global_2544210.f_5028), true);
  }
  if (Global_2544210.f_5028 > 0)
  {
    AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
    AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
    AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
    AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
    Global_2544210.f_5028 = 0;
    AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
    AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
    AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
    if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
    {
      if (Global_2544210.f_5038 > -1)
      {
        AUDIO::RELEASE_SOUND_ID(Global_2544210.f_5038);
        Global_2544210.f_5038 = -1;
      }
    }
  }
}