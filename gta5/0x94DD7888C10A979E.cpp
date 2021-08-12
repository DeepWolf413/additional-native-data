// maintransition.ysc @ L116155
void func_1003(var uParam0)
{
  if (!uParam0->f_364)
  {
    func_1010(uParam0);
    if (HUD::IS_PAUSE_MENU_ACTIVE())
    {
      HUD::SET_PAUSE_MENU_ACTIVE(false);
    }
    uParam0->f_1831[0] = 0;
    uParam0->f_1831[1] = 0;
    func_487(uParam0, 1);
    func_930(&(uParam0->f_1843), 0, 0);
    if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
    {
      LOADINGSCREEN::_LOADINGSCREEN_SET_LOAD_FREEMODE(false);
      NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
      return;
    }
    if (func_4360() == 0)
    {
      PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(false);
    }
    uParam0->f_364 = 1;
  }
  func_430(1, 0);
  func_1007(uParam0);
  func_1004(uParam0);
}