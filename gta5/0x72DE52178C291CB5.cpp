// benchmark.ysc @ L99581
void func_572(int iParam0)
{
  HUD::CLEAR_PRINTS();
  HUD::CLEAR_HELP(true);
  func_22(&iLocal_245);
  func_41();
  func_32();
  func_106();
  func_37();
  func_19();
  if (iParam0 == 1)
  {
    HUD::CLEAR_ADDITIONAL_TEXT(0, true);
    func_84(0, 1, 0, 0, 0, 0, 0);
    PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
    if (func_540(PLAYER::PLAYER_PED_ID()))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
      PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
    }
    CAM::SET_CINEMATIC_MODE_ACTIVE(false);
    PAD::_0xF239400E16C23E08(0, -1);
    MISC::CLEAR_WEATHER_TYPE_PERSIST();
    AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
    MISC::QUEUE_MISSION_REPEAT_LOAD();
    SCRIPT::TERMINATE_THIS_THREAD();
  }
}