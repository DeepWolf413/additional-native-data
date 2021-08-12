// rcm_bh_shack_escape.ysc @ L12870
void func_413(var uParam0)
{
  if (!func_6(uParam0->f_172, 8))
  {
    return;
  }
  func_125(&Global_1935630, 262144);
  PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
  HUD::_DISPLAY_HUD_COMPONENT(724769646);
  if (func_71(uParam0) == 1)
  {
    AUDIO::TRIGGER_MUSIC_EVENT("PRBTY_FAIL");
  }
  AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
  PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
}