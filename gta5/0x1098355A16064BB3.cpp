// fm_capture_creator.ysc @ L10656
void func_98(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    if (!bParam1)
    {
      AUDIO::START_AUDIO_SCENE("CREATOR_SCENES_AMBIENCE");
    }
    AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", true);
    AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(true);
  }
  else
  {
    if (!bParam1)
    {
      AUDIO::STOP_AUDIO_SCENE("CREATOR_SCENES_AMBIENCE");
    }
    AUDIO::SET_AUDIO_FLAG("AllowRadioOverScreenFade", false);
  }
}