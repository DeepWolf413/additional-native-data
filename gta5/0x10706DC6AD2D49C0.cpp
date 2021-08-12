// fmmc_launcher.ysc @ L584340
void func_9132(int iParam0)
{
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    if (HUD::GET_CURRENT_FRONTEND_MENU_VERSION() != iParam0)
    {
      HUD::RESTART_FRONTEND_MENU(iParam0, -1);
    }
    else
    {
      func_4908(8);
    }
  }
  else
  {
    HUD::ACTIVATE_FRONTEND_MENU(iParam0, false, -1);
  }
}