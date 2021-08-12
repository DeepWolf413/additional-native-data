// achievement_controller.ysc @ L14183
int func_117()
{
  float fVar0;
  
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_77248)
  {
    return 0;
  }
  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
    {
      fVar0 = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
      if (fVar0 > 0.01f && MISC::IS_PC_VERSION())
      {
        func_136(14, SYSTEM::FLOOR((fVar0 * 100f)));
      }
      if (fVar0 >= 0.975f)
      {
        func_130(14, 1);
        return 1;
      }
    }
  }
  return 0;
}