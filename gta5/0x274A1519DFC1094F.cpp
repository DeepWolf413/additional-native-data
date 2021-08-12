// pausemenu_multiplayer.ysc @ L23807
void func_526()
{
  if (iLocal_1207[2] == iLocal_275)
  {
    if (NETWORK::UGC_SET_BOOKMARKED(&(Global_956042.f_33[iLocal_336 /*88*/]), true, func_450(0)))
    {
      func_1250(1);
      HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1860370728);
      HUD::PAUSE_MENU_ACTIVATE_CONTEXT(456298020);
      HUD::_0x4895BDEA16E7C080(0);
    }
  }
  else if (iLocal_1207[2] == iLocal_270)
  {
    if (NETWORK::UGC_SET_BOOKMARKED(&(Global_794709.f_4[iLocal_336 /*88*/]), true, func_450(0)))
    {
      func_1250(1);
      HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1860370728);
      HUD::PAUSE_MENU_ACTIVATE_CONTEXT(456298020);
      HUD::_0x4895BDEA16E7C080(0);
    }
  }
  else if (iLocal_1207[2] == iLocal_273)
  {
    if (NETWORK::UGC_SET_BOOKMARKED(&(Global_928629.f_604[iLocal_336 /*88*/]), true, func_450(0)))
    {
      func_1250(1);
      HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1860370728);
      HUD::PAUSE_MENU_ACTIVATE_CONTEXT(456298020);
      HUD::_0x4895BDEA16E7C080(0);
    }
  }
}