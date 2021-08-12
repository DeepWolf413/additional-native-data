// am_beach_washup_cinematic.ysc @ L299
int func_15(var uParam0)
{
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  HUD::THEFEED_HIDE_THIS_FRAME();
  func_30(1);
  HUD::DISABLE_FRONTEND_THIS_FRAME();
  func_24(0);
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    HUD::SET_PAUSE_MENU_ACTIVE(false);
  }
  switch (func_23(uParam0))
  {
    case 0:
      func_18(uParam0);
      break;
    
    case 1:
      func_16(uParam0);
      break;
    
    case 2:
      return 1;
  }
  return 0;
}