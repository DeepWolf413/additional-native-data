// maintransition.ysc @ L116634
void func_1012(var uParam0)
{
  if (!uParam0->f_364)
  {
    func_1015(uParam0);
    if (HUD::IS_PAUSE_MENU_ACTIVE())
    {
      HUD::SET_PAUSE_MENU_ACTIVE(false);
    }
    func_487(uParam0, 1);
    func_930(&(uParam0->f_1843), 0, 0);
    if (MISC::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAVE_ONLINE_PRIVILEGE_2() == 0)
    {
      if (Global_2461741 == 0)
      {
        NETWORK::_0x83FE8D7229593017();
      }
    }
    if (MISC::IS_DURANGO_VERSION() && NETWORK::_NETWORK_HAVE_ONLINE_PRIVILEGE_2() == 0)
    {
      if (Global_2461741 == 0)
      {
        func_876(1);
      }
    }
    Global_2461741 = 1;
    uParam0->f_364 = 1;
  }
  func_430(1, 1);
  func_1014(uParam0);
  func_1013(uParam0);
}