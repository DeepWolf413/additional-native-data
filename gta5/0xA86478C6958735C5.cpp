// business_battles.ysc @ L142252
int func_1417()
{
  if ((((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !HUD::IS_HUD_HIDDEN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
  {
    return 1;
  }
  return 0;
}