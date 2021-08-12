// am_mp_car_meet_property.ysc @ L300613
void func_4802()
{
  bool bVar0;
  
  bVar0 = !func_93();
  MISC::CLEAR_BIT(&(Local_1315.f_1), 14);
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    Local_3093.f_8 = func_4803();
  }
  AUDIO::_LOCK_RADIO_STATION("RADIO_36_AUDIOPLAYER", false);
  AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_36_AUDIOPLAYER");
  AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_36_AUDIOPLAYER", "TUNER_AP_MIX3_PARTC");
  AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_01", bVar0);
  AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Main_rm_Vehicle_Noise_02", bVar0);
  AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG", bVar0, true);
  AUDIO::SET_AMBIENT_ZONE_STATE("AZ_tr_tuner_car_meet_Meet_BG_2", bVar0, true);
  AUDIO::SET_STATIC_EMITTER_ENABLED("SE_tr_tuner_car_meet_Meet_rm_Music_Takeover", !bVar0);
}