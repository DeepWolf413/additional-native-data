// am_casino_peds.ysc @ L231089
void func_2542(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    func_2515();
  }
  if (HUD::IS_PAUSE_MENU_ACTIVE() == 1)
  {
    if (bParam1)
    {
      HUD::SET_FRONTEND_ACTIVE(false);
    }
    if (bParam0)
    {
      func_2518(0, 0, 1);
    }
  }
}