// exile2.ysc @ L123094
int func_830()
{
  HUD::CLEAR_HELP(true);
  func_831();
  bLocal_789 = false;
  GRAPHICS::SET_SEETHROUGH(false);
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
  {
    AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_772))
  {
    HUD::REMOVE_BLIP(&iLocal_772);
  }
  STREAMING::START_PLAYER_SWITCH(Local_2102.f_3, PLAYER::PLAYER_PED_ID(), 0, 3);
  iLocal_628 = 5;
  return 1;
}