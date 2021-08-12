// am_mp_submarine.ysc @ L448552
void func_6899(var uParam0)
{
  if (!uParam0->f_1)
  {
    return;
  }
  uParam0->f_1 = 0;
  if (uParam0->f_7)
  {
    uParam0->f_7 = 0;
    func_6904(&Global_1316875, 8);
  }
  func_10(PLAYER::PLAYER_ID(), 1, 0, 0);
  func_1302(0, 0);
  func_5123(1, -1);
  func_5248(&(uParam0->f_5));
  func_6903(0);
  Global_2416162.f_1593 = 0;
  HUD::SET_RADAR_ZOOM(0);
  HUD::UNLOCK_MINIMAP_ANGLE();
  HUD::UNLOCK_MINIMAP_POSITION();
  HUD::SET_BIGMAP_ACTIVE(false, true);
  HUD::_THEFEED_DISPLAY_LOADING_SCREEN_TIPS();
  HUD::REMOVE_MULTIPLAYER_BANK_CASH();
  HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
  HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
  Global_1681721 = 1;
  func_6902(0);
  func_6900();
}