// marston4.ysc @ L35175
bool func_749(var uParam0)
{
  if ((!func_1199() || !func_1200()) || !func_1201())
  {
    return false;
  }
  ENTITY::SET_ENTITY_INVINCIBLE(Local_240[0 /*53*/], true);
  func_1202();
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
  func_466(&(Local_1779[0 /*38*/]), 0);
  func_466(&(Local_1779[1 /*38*/]), 0);
  func_1192(&(Local_240[0 /*53*/]), 0);
  func_883();
  func_857(Local_133[1 /*53*/], -2596.282f, 455.537f, 145.9974f, 257.6063f, 2, 1073741824 /* Float: 2f */);
  func_1202();
  func_1191(uParam0);
  MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, true, 12f, true);
  func_1203(2, 0);
  func_1203(2, 1);
  func_1203(2, 2);
  func_1203(1, 3);
  func_1189(uParam0, "MultiStart");
  CLOCK::SET_CLOCK_TIME(2, 0, 0);
  Local_53.f_13 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -2557.405f, 406.0581f, 148.3283f, 0f, 0f, 0f, 1.3f, 1.3f, 1f);
  PED::_0xDEDBED3020DA49DC(Local_53.f_13);
  func_27(&(vLocal_2009[2 /*3*/]), 0);
  func_1204();
  func_1192(&(Local_240[1 /*53*/]), 0);
  return uParam0->f_607 == uParam0->f_607;
}