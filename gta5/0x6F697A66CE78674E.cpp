// fm_horde_controler.ysc @ L161785
void func_1802(int iParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = 0;
  if (iParam0 == iParam0)
  {
    iParam0 = iParam0;
  }
  if (bParam1)
  {
  }
  if (func_2825(&(Local_2076.f_1)))
  {
    func_1408(&Local_2076, iVar0);
  }
  func_1806();
  func_1807();
  func_1804(0, 1);
  func_2831(0);
  iLocal_867 = 0;
  HUD::DISPLAY_RADAR(true);
  func_2733(0);
  iLocal_898 = 1;
  if (!func_6950(PLAYER::PLAYER_ID(), 0))
  {
    PLAYER::SET_PLAYER_TEAM(PLAYER::PLAYER_ID(), 0);
  }
  GRAPHICS::ANIMPOSTFX_STOP_ALL();
  NETWORK::NETWORK_OVERRIDE_TEAM_RESTRICTIONS(0, true);
  func_1803();
  func_1541(func_313());
}