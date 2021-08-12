// abigail1.ysc @ L30084
void func_160(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
    PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
  }
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
  PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
  PLAYER::SET_MAX_WANTED_LEVEL(5);
  PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
  PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
  PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
  HUD::DISPLAY_HUD(true);
  HUD::DISPLAY_RADAR(true);
  CAM::SET_WIDESCREEN_BORDERS(false, 0);
  MISC::SET_TIME_SCALE(1f);
  func_171();
  func_170(1, 1);
  func_169();
  func_167();
  func_166(30000);
  if (iParam1 == 1)
  {
    func_161(iParam0, bParam2, bParam3);
  }
  HUD::SET_MISSION_NAME(false, 0);
}