// mob2.ysc @ L37046
int func_799(var uParam0)
{
  iLocal_1525 = 0;
  iLocal_253 = 0;
  func_1335(0);
  func_1338(1);
  func_1339(0);
  func_1340(0);
  func_227(&uLocal_2142);
  vLocal_2235 = { func_1341(PLAYER::PLAYER_ID()) };
  MAP::ALLOW_SONAR_BLIPS(true);
  func_115(1);
  PED::SET_CREATE_RANDOM_COPS(false);
  func_1342(func_1(8, 18), 200f, 0);
  func_1289(0, 1);
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 299, true);
  return 1;
}