// am_lowrider_int.ysc @ L1990
void func_73()
{
  CUTSCENE::START_CUTSCENE(0);
  func_77(0, 1, 0, 1, 0, 1, 0);
  NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(false, false);
  NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
  func_74(1, 1, 0);
  func_350(1);
}