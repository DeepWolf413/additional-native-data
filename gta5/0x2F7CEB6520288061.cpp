// am_mp_defunct_base.ysc @ L312245
void func_5110(int iParam0)
{
  if (iParam0 == 1)
  {
    if (!MISC::IS_BIT_SET(Global_2359302.f_1, 3))
    {
      PLAYER::_0x2F7CEB6520288061(true);
      AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", true);
      AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
      AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
      MISC::SET_BIT(&(Global_2359302.f_1), 3);
    }
  }
  else if (MISC::IS_BIT_SET(Global_2359302.f_1, 3))
  {
    PLAYER::_0x2F7CEB6520288061(false);
    AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", false);
    AUDIO::SET_MOBILE_PHONE_RADIO_STATE(false);
    AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
    MISC::CLEAR_BIT(&(Global_2359302.f_1), 3);
  }
}