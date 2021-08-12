// fmmc_launcher.ysc @ L589772
void func_9309()
{
  if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_PAUSE_MENU_RESTARTING())
  {
    HUD::DISPLAY_RADAR(false);
    HUD::SET_FRONTEND_ACTIVE(false);
  }
}