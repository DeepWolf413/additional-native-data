// camp_beaverhollow.ysc @ L2566
int func_71()
{
  if (func_426(32))
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      CAM::DO_SCREEN_FADE_IN(500);
    }
    func_427(32);
  }
  func_330(&Local_18);
  func_331(&Local_18);
  if (!func_12(2048))
  {
    CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
  }
  PED::SET_PED_CONFIG_FLAG(Global_35, 473, true);
  PED::SET_PED_CONFIG_FLAG(Global_35, 474, true);
  PED::SET_PED_CONFIG_FLAG(Global_35, 475, true);
  func_428(&(Global_1391438.f_5), 32, 1);
  func_429();
  AUDIO::SET_AUDIO_FLAG("EnableIdleMusic", true);
  func_430(0);
  func_419(Local_18.f_46, 8);
  func_167(1073741824 /* Float: 2f */);
  return 1;
}