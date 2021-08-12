// business_battles.ysc @ L164312
void func_1838(int iParam0, bool bParam1)
{
  HUD::SET_BLIP_FLASHES(*iParam0, true);
  HUD::SET_BLIP_FLASH_INTERVAL(*iParam0, 250);
  HUD::SET_BLIP_FLASH_TIMER(*iParam0, 7000);
  if (bParam1)
  {
    HUD::FLASH_MINIMAP_DISPLAY();
  }
}