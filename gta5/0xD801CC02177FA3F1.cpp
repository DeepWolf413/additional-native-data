// cellphone_controller.ysc @ L826
void func_14()
{
  GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
  GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
  GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
  HUD::BUSYSPINNER_OFF();
  Global_22161 = 0;
  Global_22162 = 0;
  Global_22163 = 0;
  Global_22160 = 0;
}