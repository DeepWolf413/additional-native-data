// gang2.ysc @ L34615
int func_745(char[4] cParam0)
{
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  if (PED::DOES_GROUP_EXIST(iLocal_473))
  {
    PED::REMOVE_GROUP(iLocal_473);
  }
  func_1247(cParam0, 0);
  func_1262(cParam0, iLocal_315[1], 1);
  func_1245(11, 1);
  func_1264(cParam0, iLocal_315[1], 128);
  func_454();
  AUDIO::_0x660A8F876DF1D4F8(25);
  AUDIO::_0x660A8F876DF1D4F8(21);
  AUDIO::_0x660A8F876DF1D4F8(19);
  AUDIO::_0x660A8F876DF1D4F8(6);
  PED::_0x2B4CE170DE09F346(iLocal_315[1], joaat("GNG2_RIDE1"));
  PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
  return 1;
}