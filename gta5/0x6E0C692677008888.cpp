// maintransition.ysc @ L334538
void func_4212()
{
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    HUD::SET_FRONTEND_ACTIVE(false);
  }
  if (func_45() == 35)
  {
    HUD::_REMOVE_WARNING_MESSAGE_LIST_ITEMS();
    func_664(0);
  }
  func_4374(0);
  func_1074(1);
  Global_1312461 = 1;
  func_2004(1);
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
  }
  if (Global_2461738)
  {
    STREAMING::SET_STREAMING(true);
    Global_2461738 = 0;
  }
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_1845()))
  {
    AUDIO::STOP_AUDIO_SCENE(func_1845());
  }
  if ((func_45() == 4 || func_45() == 5) || func_45() == 15)
  {
    CAM::DO_SCREEN_FADE_OUT(0);
  }
}