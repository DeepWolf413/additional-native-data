// train_robbery3.ysc @ L34379
bool func_727(var uParam0)
{
  func_1181(&iLocal_123);
  UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
  func_1179(1);
  CAM::STOP_GAMEPLAY_HINT(false);
  PED::SET_PED_CAN_ARM_IK(iLocal_127, true);
  PED::SET_PED_CAN_ARM_IK(Global_35, true);
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  HUD::_DISPLAY_HUD_COMPONENT(724769646);
  if (CAM::IS_GAMEPLAY_CAM_SHAKING())
  {
    CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
  }
  MISC::_0x8314FC2013ECE2DA(vLocal_641);
  return uParam0->f_607 == uParam0->f_607;
}