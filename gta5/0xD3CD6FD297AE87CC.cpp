// am_dead_drop.ysc @ L119823
void func_1276()
{
  if (func_1472())
  {
    return;
  }
  if (!HUD::DOES_BLIP_EXIST(iLocal_2212))
  {
    iLocal_2212 = func_1279(Local_84.f_13, 1);
    HUD::SET_BLIP_COLOUR(iLocal_2212, 5);
    func_1277(&iLocal_2212, 12);
    HUD::SHOW_HEIGHT_ON_BLIP(iLocal_2212, true);
    HUD::SET_BLIP_FLASH_TIMER(iLocal_2212, 7000);
    HUD::SET_BLIP_PRIORITY(iLocal_2212, 6);
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_2212, "DD_BLIP3");
    HUD::SET_BLIP_ROUTE(iLocal_2212, true);
  }
}