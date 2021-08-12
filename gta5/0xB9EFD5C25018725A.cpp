// am_boat_taxi.ysc @ L5403
void func_130()
{
  AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
  if (func_3(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2)) && !func_131(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), -1))
    {
      AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
    }
  }
}