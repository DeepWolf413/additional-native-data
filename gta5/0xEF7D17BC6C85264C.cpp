// am_armwrestling.ysc @ L56338
void func_491(int iParam0)
{
  func_492();
  if (iParam0 == 0)
  {
    if (LOADINGSCREEN::_LOADINGSCREEN_GET_LOAD_FREEMODE())
    {
      return;
    }
  }
  if (func_742() == 0 || HUD::IS_PAUSE_MENU_ACTIVE())
  {
    func_741(1);
    GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
    GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
  }
}