// finale2.ysc @ L37855
bool func_827(var uParam0)
{
  PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
  if (CAM::DOES_CAM_EXIST(iLocal_1193))
  {
    CAM::DESTROY_CAM(iLocal_1193, false);
  }
  func_1284();
  if (func_176(iLocal_70, 131072))
  {
    PLAYER::_0x6B5DDFB967E5073D(PLAYER::PLAYER_ID(), 0);
    func_177(&iLocal_70, 131072);
  }
  if (func_176(iLocal_70, 262144))
  {
    PLAYER::_0x3C4AE8506638C7E2(PLAYER::PLAYER_ID(), 1);
    func_177(&iLocal_70, 262144);
  }
  return uParam0->f_607 == uParam0->f_607;
}