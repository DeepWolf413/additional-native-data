// appcovertops.ysc @ L7672
void func_256(bool bParam0, int iParam1)
{
  GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_499);
  func_252(iParam1);
  func_254(0);
  func_257();
  AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(1000);
  AUDIO::PLAY_SOUND_FRONTEND(-1, "Logout", "DLC_GR_MOC_Computer_Sounds", true);
  if (MISC::IS_PC_VERSION())
  {
    func_209(0, 1, 1, 1);
  }
  if (bParam0)
  {
    func_80(PLAYER::PLAYER_ID(), 1, 0, 0);
  }
  HUD::THEFEED_RESUME();
  SCRIPT::TERMINATE_THIS_THREAD();
}