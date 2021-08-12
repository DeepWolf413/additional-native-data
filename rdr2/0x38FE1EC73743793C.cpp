// act_fishing06.ysc @ L34510
int func_976(var uParam0)
{
  if (!func_1294(func_509(1)))
  {
    return 0;
  }
  if (!func_1295(&(Local_134.f_143), func_509(1), func_851(1)))
  {
    return 0;
  }
  if (!func_1298(&Local_134))
  {
    return 0;
  }
  func_1299(Global_35, 31);
  func_1299(Local_134.f_80[0], 32);
  func_228(&Local_134, 1);
  func_522(&(Local_134.f_9), 1);
  func_508(&Local_134, 4);
  func_1297(0, 0);
  TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_134.f_80[0], false, 1f);
  TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_134.f_80[0], func_521(1), 0, 25600, -1, 0, 0, -1);
  ENTITY::FREEZE_ENTITY_POSITION(Local_134.f_143, true);
  func_508(&Local_134, 4);
  if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
  {
    MAP::REMOVE_BLIP(&(uParam0->f_43));
  }
  AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RESTART_3");
  return 1;
}