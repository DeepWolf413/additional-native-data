// am_hi_plane_land_cinematic.ysc @ L46196
void func_259()
{
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  HUD::THEFEED_HIDE_THIS_FRAME();
  func_261(1);
  HUD::DISABLE_FRONTEND_THIS_FRAME();
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    HUD::SET_PAUSE_MENU_ACTIVE(false);
    HUD::SET_FRONTEND_ACTIVE(false);
  }
  func_261(1);
  func_260(1);
  if (!HUD::THEFEED_IS_PAUSED())
  {
    HUD::THEFEED_PAUSE();
  }
  HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
  func_53(1);
}