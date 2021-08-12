// controller_towing.ysc @ L6427
void func_115()
{
  AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
  SCRIPT::REQUEST_SCRIPT("Towing");
  HUD::CLEAR_HELP(true);
  func_116(&iLocal_62);
}