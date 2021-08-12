// mudtown5.ysc @ L57522
int func_1272(var uParam0)
{
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_3183))
  {
    PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_3183);
  }
  func_908(1915887592, 1, 0f, 0, 1, 0, 0, 0);
  func_908(-970668084, 1, 0f, 0, 1, 0, 0, 0);
  if (iLocal_2509 == 0)
  {
    func_829(iLocal_218, -816.9f, 336.7f, 96.5f, 174.8f, 2, 1073741824 /* Float: 2f */);
  }
  PED::_SET_PED_ON_MOUNT(Global_35, iLocal_218, -1, true);
  TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_1258, Global_35, 0, -1f, -1f, -1f);
  TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_1257, Global_35, 0, -1f, -1f, -1f);
  MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
  CLOCK::SET_CLOCK_TIME(16, 0, 0);
  CAM::_0xBC016635D6A73B31("script@Story@MUD5@RideToClemens", "1_LeavingDownes_1", 5);
  PED::_0x2208438012482A1A(Global_35, false, false);
  PED::_0x2208438012482A1A(iLocal_218, false, false);
  PED::FORCE_PED_MOTION_STATE(iLocal_218, joaat("MOTIONSTATE_RUN"), false, 0, false);
  AUDIO::_0x5E3CCF03995388B5(683854505, -816.7f, 313.8f, 95.5f);
  func_60(1);
  return 1;
}