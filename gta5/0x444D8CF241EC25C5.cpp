// fmmc_launcher.ysc @ L490384
void func_7686(int iParam0, int iParam1)
{
  if (func_7687(iParam1) && ((iParam0 == 0 || iParam0 == 1) || iParam0 == 4))
  {
    HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1892851880);
  }
  else
  {
    HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1892851880);
  }
}