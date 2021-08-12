// am_mp_auto_shop.ysc @ L427227
int func_6385()
{
  char* sVar0;
  char* sVar1;
  
  if (func_27(PLAYER::PLAYER_ID()) && !func_326(18159, -1, -1))
  {
    return 14;
  }
  if (func_26(PLAYER::PLAYER_ID()) && !func_326(30705, -1, -1))
  {
    return AUDIO::FIND_RADIO_STATION_INDEX(666182883);
  }
  if (func_23(PLAYER::PLAYER_ID()))
  {
    if (!func_326(32272, -1, -1) && func_6387(4))
    {
      sVar0 = func_6386(4);
      sVar1 = AUDIO::GET_RADIO_STATION_NAME(func_33());
      AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST(sVar1, sVar0);
      AUDIO::_0x4E0AF9114608257C(sVar1, sVar0, (MISC::GET_RANDOM_INT_IN_RANGE(0, 13) * 60000));
      return func_33();
    }
    else if (!func_326(32271, -1, -1))
    {
      return AUDIO::FIND_RADIO_STATION_INDEX(666182883);
    }
  }
  return Global_2097152[func_194() /*5557*/].f_7.f_9[0];
}