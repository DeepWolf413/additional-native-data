// am_mp_auto_shop.ysc @ L67639
void func_480(bool bParam0)
{
  if (bParam0)
  {
    if (!HUD::BUSYSPINNER_IS_ON())
    {
      HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("MP_SPINLOADING");
      HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(5);
    }
  }
  else if (HUD::BUSYSPINNER_IS_ON())
  {
    HUD::BUSYSPINNER_OFF();
  }
}