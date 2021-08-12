// barry3a.ysc @ L46630
void func_451()
{
  HUD::REQUEST_ADDITIONAL_TEXT("BARR3A", 0);
  Local_145.f_5 = joaat("dloader");
  Local_145 = { 1199.8f, -1259.22f, 34.23f };
  Local_145.f_3 = 174.7f;
  if (func_204(PLAYER::PLAYER_PED_ID()))
  {
    func_238(&uLocal_251, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
  }
  iLocal_432 = 0;
  iLocal_443 = 0;
  iLocal_426 = 0;
  func_462();
  iLocal_433 = 0;
  iLocal_434 = 0;
  iLocal_248 = 0;
  func_460();
  func_459();
  iLocal_428 = 0;
  STREAMING::REQUEST_MODEL(iLocal_246);
  STREAMING::REQUEST_MODEL(iLocal_247);
  iLocal_245 = 1;
  iLocal_439 = 0;
  iLocal_442 = 0;
  sLocal_449 = "DEFAULT";
  func_452(49, 1, 0);
  iLocal_164[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1156.9f, -1274f, 0f, -1141.5f, -1239.6f, 8f, false, true, true, true);
  iLocal_164[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1177f, -1292f, 0f, -1160f, -1273.3f, 8f, false, true, true, true);
  PATHFIND::SET_GPS_DISABLED_ZONE(-1132.88f, -1262.01f, 0f, -1102.43f, -1196.58f, 15f);
  PED::SET_CREATE_RANDOM_COPS(false);
}