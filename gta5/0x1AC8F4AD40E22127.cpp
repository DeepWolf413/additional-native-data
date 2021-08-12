// fm_bj_race_controler.ysc @ L223908
void func_2917()
{
  func_2926();
  func_1423();
  PAD::STOP_PAD_SHAKE(0);
  HUD::CLEAR_PRINTS();
  func_2919();
  func_2918(1);
  HUD::DISPLAY_RADAR(false);
  NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(0);
  Global_1574195 = -1;
  if (func_9166(PLAYER::PLAYER_ID(), 1, 1))
  {
    PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
  }
  if (func_1414())
  {
    func_4368(PLAYER::PLAYER_ID(), 0, 0, 0);
  }
  if (MISC::IS_PC_VERSION())
  {
    HUD::_CLOSE_MULTIPLAYER_CHAT();
  }
  HUD::SET_FRONTEND_ACTIVE(false);
}