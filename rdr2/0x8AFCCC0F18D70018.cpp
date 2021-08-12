// marston4.ysc @ L35482
bool func_757(var uParam0)
{
  func_179(&iLocal_2040);
  func_171();
  func_172();
  PED::REMOVE_PED_FROM_GROUP(Local_240[0 /*53*/]);
  PED::REMOVE_PED_FROM_GROUP(Local_240[1 /*53*/]);
  func_168(uParam0, 13, Local_133[0 /*53*/], 0, 0, 1, 0);
  func_168(uParam0, 14, Local_133[1 /*53*/], 0, 0, 1, 0);
  PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
  func_179(&iLocal_2040);
  PED::SET_PED_CONFIG_FLAG(Local_240[1 /*53*/], 167, false);
  PED::SET_PED_CONFIG_FLAG(Local_240[0 /*53*/], 167, false);
  PED::_0x8AFCCC0F18D70018(func_1235(), 0);
  CAM::_0xE296208C273BD7F0(-1, 20000, 0, 17, 1, 0);
  func_59(7);
  func_169();
  func_1224(uParam0, "MultiStart");
  func_1189(uParam0, "MultiStart");
  func_1190(uParam0, "MultiStart");
  return uParam0->f_607 == uParam0->f_607;
}