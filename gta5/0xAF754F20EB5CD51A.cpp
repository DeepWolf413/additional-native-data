// heli_gun.ysc @ L7989
bool func_173()
{
  return ((((((((((((!iLocal_297 && !func_157(PLAYER::PLAYER_ID())) && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_RADAR_HIDDEN()) && HUD::IS_MINIMAP_RENDERING()) && !func_46()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !func_174()) && !func_40(PLAYER::PLAYER_ID()));
}