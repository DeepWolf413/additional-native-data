// am_hunt_the_beast.ysc @ L106427
void func_552(char* sParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    if (func_510(1) || iParam1 == 1)
    {
      func_544(47, 48, sParam0, -1, 1);
      if (func_493() && iParam1 == 1)
      {
        func_543(sParam0, bParam2);
      }
    }
    else
    {
      func_544(61, 63, sParam0, -1, 1);
      if (func_517() && iParam1 == 0)
      {
        func_547(sParam0, bParam2);
      }
    }
  }
  StringCopy(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_105), sParam0, 64);
  Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_121 = LOCALIZATION::_LOCALIZATION_GET_SYSTEM_LANGUAGE();
  if ((!MISC::IS_DURANGO_VERSION() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || func_542())
  {
    func_447(28);
  }
  else
  {
    func_448(28);
  }
}