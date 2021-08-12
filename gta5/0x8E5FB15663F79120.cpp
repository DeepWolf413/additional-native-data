// am_darts.ysc @ L126626
void func_1306()
{
  HUD::CLEAR_HELP(true);
  CAM::DESTROY_ALL_CAMS(false);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
  HUD::DISPLAY_RADAR(true);
}