// am_mp_arcade.ysc @ L322635
void func_5080()
{
  if (!func_4580(PLAYER::PLAYER_ID()) && func_124(PLAYER::PLAYER_ID()))
  {
    HUD::SET_RADAR_ZOOM_PRECISE(1f);
  }
  else
  {
    HUD::SET_RADAR_ZOOM_PRECISE(0f);
  }
}