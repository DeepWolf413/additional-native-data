// fm_maintain_transition_players.ysc @ L39075
void func_307()
{
  if (func_310(166))
  {
    return;
  }
  if (Global_2464553 != 0f)
  {
    HUD::SET_RADAR_ZOOM_TO_DISTANCE(Global_2464553);
  }
  HUD::LOCK_MINIMAP_POSITION(fLocal_259, fLocal_260);
}