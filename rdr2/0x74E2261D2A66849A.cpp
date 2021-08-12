// rcm_gang01.ysc @ L1383
void func_34(var uParam0)
{
  if (!func_84(Global_1935630, 1048576))
  {
    func_173(&Global_1935630, 1048576);
  }
  func_174(&uLocal_35);
  func_175(&uLocal_35, 1);
  func_176(&uLocal_35, 1);
  CLOCK::SET_CLOCK_TIME(13, 10, 0);
  MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
  func_177(joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"), 0, 0, 1103626240 /* Float: 25f */);
  Local_17.f_2 = { 272.2497f, -5340.033f, 32.00273f };
  Local_17.f_5 = 324.4554f;
  Local_17.f_7 = { 3010.809f, 482.6019f, 38.2198f };
  Local_17.f_10 = 225.8958f;
  func_178(uParam0, 1);
  func_179(uParam0, 2);
  func_180(uParam0, Global_35, "ARTHUR", 0);
  STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
  if (!ENTITY::IS_ENTITY_DEAD(Global_35))
  {
    ENTITY::SET_ENTITY_COORDS(Global_35, 2991.667f, 470.0888f, 41.2461f, true, false, true, true);
    ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
    ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
  }
}