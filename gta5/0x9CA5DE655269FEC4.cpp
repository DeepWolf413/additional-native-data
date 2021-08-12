// am_casino_limo.ysc @ L17194
void func_358(bool bParam0, bool bParam1, bool bParam2)
{
  func_360();
  func_352(1);
  HUD::CLEAR_HELP(true);
  HUD::CLEAR_PRINTS();
  func_340(1, 1, 1, 0, 0, 0, bParam2);
  func_359();
  func_338(12, 1, -1);
  func_337(0);
  CAM::SET_WIDESCREEN_BORDERS(true, -1);
  HUD::DISPLAY_RADAR(false);
  HUD::DISPLAY_HUD(false);
  func_352(1);
  func_335(1);
  Global_2441237.f_3865 = 1;
  if (bParam0)
  {
    if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
    {
      NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);
    }
  }
}