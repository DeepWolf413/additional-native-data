// act_fishing06.ysc @ L34595
int func_978(var uParam0)
{
  if (!func_1294(func_509(30)))
  {
    return 0;
  }
  if (!func_1295(&(Local_134.f_143), func_509(30), func_851(30)))
  {
    return 0;
  }
  func_1300(func_509(30), 15f, 0, 0, 0, 0, 0);
  if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
  {
    ENTITY::SET_ENTITY_HEADING(Local_134.f_143, func_851(30));
    PED::SET_PED_INTO_VEHICLE(Global_35, Local_134.f_143, -1);
    PED::SET_PED_INTO_VEHICLE(func_75(uParam0->f_2), Local_134.f_143, 1);
  }
  func_1297(0, 0);
  if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
  {
    MAP::REMOVE_BLIP(&(uParam0->f_43));
  }
  ENTITY::FREEZE_ENTITY_POSITION(Local_134.f_143, true);
  func_228(&Local_134, 1);
  func_522(&(Local_134.f_9), 3);
  func_899(&(Local_134.f_8), 5);
  AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RESTART_5");
  return 1;
}