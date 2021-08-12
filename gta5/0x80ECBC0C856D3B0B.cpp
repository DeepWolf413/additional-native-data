// assassin_bus.ysc @ L16596
void func_317(var uParam0, int iParam1)
{
  iLocal_1705 = 1;
  iLocal_1749 = 0;
  iLocal_1738 = 0;
  iLocal_1725 = 0;
  iLocal_1747++;
  iLocal_1718 = 0;
  if (iLocal_1747 == 2)
  {
    func_320();
  }
  func_319(uParam0, iParam1);
  func_318(uParam0);
  func_309(uParam0);
  func_282(uParam0->f_1, 1);
  func_299();
  GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
  GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
}