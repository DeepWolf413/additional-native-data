// am_mp_defunct_base.ysc @ L312150
void func_5106()
{
  if (Global_1390699 >= 0 && Global_1390699 < AUDIO::GET_NUM_UNLOCKED_RADIO_STATIONS())
  {
    AUDIO::SET_RADIO_TO_STATION_INDEX(Global_1390699);
  }
  else
  {
    AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
  }
}