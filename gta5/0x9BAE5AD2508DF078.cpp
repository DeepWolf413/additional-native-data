// freemode_init.ysc @ L2120
void func_55()
{
  func_314();
  if (((!func_313() && !func_312()) && !func_311()) && !func_310())
  {
    MISC::SET_INSTANCE_PRIORITY_MODE(1);
  }
  HUD::TOGGLE_STEALTH_RADAR(true);
  PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
  func_308();
  func_306();
  func_304();
  func_303();
  func_259();
  func_256();
  func_252();
  func_246();
  if (func_245() != 1)
  {
    func_223();
  }
  func_165();
  func_162();
  func_155();
  func_137();
  func_71(0);
  func_67();
  func_66();
  func_56();
  MISC::USING_MISSION_CREATOR(false);
  MISC::ALLOW_MISSION_CREATOR_WARP(false);
}