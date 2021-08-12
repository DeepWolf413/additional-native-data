// am_armwrestling.ysc @ L55148
void func_448(int iParam0, bool bParam1, bool bParam2)
{
  if (func_449())
  {
    return;
  }
  if ((func_742() == 1 || HUD::IS_PAUSE_MENU_ACTIVE()) || iParam0)
  {
    func_741(0);
    GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
    if (!bParam1)
    {
      GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
    }
    if (bParam2)
    {
      GRAPHICS::RESET_PAUSED_RENDERPHASES();
    }
  }
}