// finale1.ysc @ L39761
bool func_856(var uParam0)
{
  func_27(&(vLocal_1539[2 /*3*/]), 1);
  func_1399(uParam0);
  func_1377(uParam0, iLocal_1486);
  ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1486, true);
  MISC::_SET_WEATHER_TYPE(joaat("MISTY"), false, true, true, 60f, false);
  TASK::_0x2A10538D0A005E81(iLocal_1646[26], 2);
  if (!func_1437(iLocal_1486, 518218985))
  {
    TASK::TASK_SMART_FLEE_PED(iLocal_1486, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
    ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1486, true);
  }
  func_403(uParam0, 50);
  func_1379(uParam0);
  func_149(uParam0, 50f);
  func_150(uParam0, 75f);
  CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(500);
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1646[40]))
  {
    iLocal_1646[40] = VOLUME::_CREATE_VOLUME_BOX(2335.365f, 1436.817f, 91.4146f, 0f, 0f, -15.37877f, 9.238659f, 1.570113f, 5.509256f);
    PATHFIND::_0x19C7567D2F2287D6(iLocal_1646[40], 8);
  }
  return uParam0->f_607 == uParam0->f_607;
}