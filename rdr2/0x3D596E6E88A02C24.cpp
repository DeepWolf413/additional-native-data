// mob4.ysc @ L17899
void func_170()
{
  func_443();
  func_444();
  func_445();
  func_446(553939906, 0, 0f, 0, 1, 0, 0, 0);
  func_446(357129292, 0, 0f, 0, 1, 0, 0, 0);
  func_446(1488396696, 0, 0f, 0, 1, 0, 0, 0);
  func_447(17, 1);
  func_448(7);
  func_450(func_449(3, 17), 4);
  func_451(1);
  HUD::_DISPLAY_HUD_COMPONENT(372886907);
  UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
  PATHFIND::_0xD17672447692478E(iLocal_140, 0);
  VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
  MISC::CLEAR_WEATHER_TYPE_PERSIST();
  MISC::CLEAR_OVERRIDE_WEATHER();
  GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
  CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
  if (TASK::DOES_SCENARIO_GROUP_EXIST(sLocal_39))
  {
    if (!TASK::IS_SCENARIO_GROUP_ENABLED(sLocal_39))
    {
      TASK::SET_SCENARIO_GROUP_ENABLED(sLocal_39, true);
    }
  }
}