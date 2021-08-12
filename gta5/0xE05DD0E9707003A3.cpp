// traffick_air.ysc @ L4795
void func_7(var uParam0, bool bParam1)
{
  if (*bParam1)
  {
    HUD::CLEAR_HELP(true);
    *bParam1 = 0;
  }
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
  }
  VEHICLE::_0xE05DD0E9707003A3(uParam0->f_25, false);
  if (!iLocal_3518)
  {
    AUDIO::START_AUDIO_SCENE("BAY_DOOR_SCENE");
    iLocal_3518 = 1;
  }
  func_17(uParam0, 0, 0, 1);
  HUD::DISPLAY_RADAR(true);
  HUD::DISPLAY_HUD(true);
  GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
  func_8(0, 0, 30, 5, 0);
  CAM::DESTROY_CAM(uParam0->f_304, false);
  CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}