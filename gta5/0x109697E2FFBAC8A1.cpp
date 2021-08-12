// fm_bj_race_controler.ysc @ L271606
void func_3610(var uParam0, var uParam1)
{
  if ((((((((!func_258(Global_4194305.f_5) && !func_1990(uParam0->f_571)) && func_9166(PLAYER::PLAYER_ID(), 1, 1)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && AUDIO::DOES_PLAYER_VEH_HAVE_RADIO()) && AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255) && !func_198(PLAYER::PLAYER_ID())) && !func_4377()) && !func_274())
  {
    Global_2463480 = 1;
    AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
    AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
  }
  func_3561(uParam1, &(uParam1->f_5129), &(uParam1->f_5146));
  if (func_1800())
  {
    func_1449(&(uParam1->f_5163), &(uParam1->f_5180));
  }
  AUDIO::STOP_AUDIO_SCENE("MP_RACE_GENERAL_SCENE");
  if (MISC::IS_BIT_SET(uParam1->f_5388, 25))
  {
    if (!func_274())
    {
      AUDIO::TRIGGER_MUSIC_EVENT("MP_DM_COUNTDOWN_30_SEC_FIRA");
    }
    else
    {
      AUDIO::TRIGGER_MUSIC_EVENT("AW_COUNTDOWN_30S_KILL");
    }
  }
}