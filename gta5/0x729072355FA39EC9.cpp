// am_mp_casino.ysc @ L298206
void func_4816()
{
  if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_6165.f_7))
  {
    if (!MISC::IS_BIT_SET(Local_6165, 2))
    {
      AUDIO::START_AUDIO_SCENE("DLC_VW_Casino_PA_Announcement_Scene");
      MISC::SET_BIT(&Local_6165, 2);
    }
  }
  else if (MISC::IS_BIT_SET(Local_6165, 2))
  {
    AUDIO::STOP_AUDIO_SCENE("DLC_VW_Casino_PA_Announcement_Scene");
    MISC::CLEAR_BIT(&Local_6165, 2);
  }
}