// player_timetable_scene.ysc @ L149090
int func_759(int iParam0, int iParam1, bool bParam2)
{
  if (iParam1 == 280)
  {
    if (bParam2)
    {
      if (Global_3)
      {
        AUDIO::SET_VEHICLE_RADIO_ENABLED(iParam0, true);
        AUDIO::SET_VEH_RADIO_STATION(iParam0, "RADIO_06_COUNTRY");
        AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_06_COUNTRY", "MAGDEMO2_RADIO_DINGHY", true);
        return 1;
      }
    }
  }
  if (iParam1 == 171)
  {
    if (bParam2)
    {
      AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
      AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
      AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
      AUDIO::SET_VEH_RADIO_STATION(iParam0, "RADIO_01_CLASS_ROCK");
      return 1;
    }
    else
    {
      AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
      return 1;
    }
  }
  return 0;
}