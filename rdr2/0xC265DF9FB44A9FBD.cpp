// grays2.ysc @ L56290
bool func_1374()
{
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_432[1], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_432[1]) >= 482)
  {
    func_1943();
    if (fLocal_244 < 0.8f && !AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(iLocal_432[1]))
    {
      if (func_1351())
      {
        AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_432[1], "WHINNY_SHORT", false);
      }
      else
      {
        AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_432[1], "WHINNY_LONG", false);
      }
    }
    if (fLocal_244 < 1f)
    {
      PED::_0x89F5E7ADECCCB49C(iLocal_432[1], "BUCKING_HIGH");
    }
    PED::_0x413697EC260AABBF(iLocal_432[1], 4, 2);
    if (fLocal_244 >= 1f)
    {
      PED::_0x58F7DB5BD8FA2288(iLocal_432[1]);
      return true;
    }
  }
  return false;
}