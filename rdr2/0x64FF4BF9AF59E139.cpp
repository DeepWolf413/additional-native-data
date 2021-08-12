// abigail2_1.ysc @ L83846
void func_2516(var uParam0, bool bParam1)
{
  if (bParam1)
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
  }
  else
  {
    PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
  }
  func_2169(uParam0, 4);
  HUD::_HIDE_HUD_COMPONENT(-1679307491);
  if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
  {
    PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
  }
  if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
  {
    PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
  }
  if ((func_1375(uParam0) == 0 && uParam0->f_2074 >= 0) && !func_1815(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288))
  {
    CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
    func_2159(uParam0, 64);
  }
  PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
  func_2234(0);
  if (func_980())
  {
    func_496(0);
  }
}