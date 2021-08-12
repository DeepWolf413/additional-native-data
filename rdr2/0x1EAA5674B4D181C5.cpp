// act_fishing03.ysc @ L34534
int func_997(var uParam0, var uParam1)
{
  int iVar0;

  iVar0 = func_61(uParam0->f_2);
  if (func_1254(func_618(4, 0)) == 0)
  {
    return 0;
  }
  if (MAP::DOES_BLIP_EXIST(iLocal_29))
  {
    MAP::REMOVE_BLIP(&iLocal_29);
  }
  MAP::CLEAR_GPS_CUSTOM_ROUTE();
  func_1257(uParam0, func_1256(4, 0), func_1256(4, 1), func_1256(4, 2), func_1256(4, 3));
  func_235(&iLocal_138, 3);
  func_595(1);
  func_918(&iLocal_141, 4);
  WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("WEAPON_FISHINGROD"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
  func_523(&iLocal_33, 12);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, func_539(7), 1f, -1, 0.25f, 0, func_542(7));
  func_584(&iLocal_142, 8);
  MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
  func_550(uParam0, func_549(5), func_549(7), 5, 7);
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    CAM::DO_SCREEN_FADE_IN(0);
  }
  func_232(&(uParam1->f_45), 32);
  func_232(&(uParam1->f_45), 128);
  AUDIO::TRIGGER_MUSIC_EVENT("CAFISH02_RESTART_4");
  return 1;
}