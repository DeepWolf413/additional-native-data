// train_robbery1.ysc @ L34439
bool func_743(var uParam0)
{
  func_887(Global_36, 5f, 0, 0, 1, 1, 0);
  func_1202(uParam0);
  func_1203(Global_35, 0);
  MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 15f, false);
  iLocal_3480[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2956.536f, 1335.25f, 45.61551f, 0f, 0f, 70.00006f, 11f, 32f, 8f, "TRN1 AVOIDANCE 0");
  MISC::_0x2FCD528A397E5C88(iLocal_3480[0], 1064960);
  POPULATION::_0xB56D41A694E42E86(iLocal_3480[0], 42976, 0, 0, -1, -1, 2);
  POPULATION::_0x18262CAFEBB5FBE1(iLocal_3480[0], 10208, 0, 0, -1, -1, 0);
  iLocal_3480[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3004.091f, 1341.845f, 43f, 0f, 0f, 61.00002f, 35f, 35.5f, 4f, "TRN1 AVOIDANCE 1");
  MISC::_0x2FCD528A397E5C88(iLocal_3480[1], 1064960);
  POPULATION::_0xB56D41A694E42E86(iLocal_3480[1], 42976, 0, 0, -1, -1, 2);
  POPULATION::_0x18262CAFEBB5FBE1(iLocal_3480[1], 10208, 0, 0, -1, -1, 0);
  iLocal_3480[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2931.261f, 1335.488f, 45.61551f, 0f, 0f, 105.0001f, 24f, 59f, 12f, "TRN1 AVOIDANCE 2");
  MISC::_0x2FCD528A397E5C88(iLocal_3480[2], 1064968);
  POPULATION::_0xB56D41A694E42E86(iLocal_3480[2], 42976, 0, 0, -1, -1, 2);
  POPULATION::_0x18262CAFEBB5FBE1(iLocal_3480[2], 10208, 0, 0, -1, -1, 0);
  func_1204();
  VEHICLE::_0x424FFCB9F0D2D4B5(iLocal_3430[23], 0);
  VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(3036.49f, 1355.76f, 34.08f, 3010.15f, 1323.43f, 43.73f);
  return uParam0->f_607 == uParam0->f_607;
}