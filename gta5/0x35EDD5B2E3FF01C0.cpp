// golf.ysc @ L121709
void func_1268()
{
  HUD::SET_MINIMAP_GOLF_COURSE_OFF();
  HUD::UNLOCK_MINIMAP_ANGLE();
  HUD::UNLOCK_MINIMAP_POSITION();
  HUD::SET_RADAR_ZOOM(0);
  if (!func_450())
  {
    HUD::TOGGLE_STEALTH_RADAR(true);
  }
}