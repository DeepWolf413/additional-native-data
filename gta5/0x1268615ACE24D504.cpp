// fm_content_island_heist.ysc @ L31093
void func_833()
{
  GRAPHICS::_SET_ARTIFICIAL_LIGHTS_STATE_AFFECTS_VEHICLES(true);
  GRAPHICS::SET_ARTIFICIAL_LIGHTS_STATE(false);
  GRAPHICS::OVERRIDE_INTERIOR_SMOKE_END();
  GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
  GRAPHICS::REMOVE_TCMODIFIER_OVERRIDE("lab_none_dark");
  GRAPHICS::REMOVE_TCMODIFIER_OVERRIDE("lab_none_exit");
  GRAPHICS::REMOVE_TCMODIFIER_OVERRIDE("morgue_dark");
  if (func_839())
  {
    Local_275 = AUDIO::GET_SOUND_ID();
    AUDIO::PLAY_SOUND_FRONTEND(Local_275, func_837(), func_836(), true);
  }
  if (!MISC::IS_STRING_NULL_OR_EMPTY(func_835()))
  {
    AUDIO::STOP_AUDIO_SCENE(func_835());
  }
  Local_275.f_1 = -1;
  func_834(2);
}