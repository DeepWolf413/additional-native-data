// pausemenu_multiplayer.ysc @ L3167
void func_57()
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (!iLocal_1308)
    {
      func_90();
      iLocal_1308 = 1;
    }
    if (!CAM::IS_SCREEN_FADED_OUT())
    {
      CAM::DO_SCREEN_FADE_OUT(0);
    }
    HUD::SET_FRONTEND_ACTIVE(false);
    Global_1312452 = 0;
    func_1250(19);
    func_89();
    func_74(PLAYER::PLAYER_ID(), 0, 49152, 0);
    Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_95 = 8;
    func_73();
    func_1461();
    func_62(2, 1);
  }
  GRAPHICS::_0x851CD923176EBA7C();
  func_58(0);
}