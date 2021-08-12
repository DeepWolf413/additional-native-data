// am_casino_peds.ysc @ L353917
struct<16> func_5034(bool bParam0)
{
  struct<16> Var0;
  bool bVar16;
  
  if (Global_1630816[bParam0 /*597*/].f_11.f_121 != Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_121)
  {
    StringCopy(&Var0, func_5037(bParam0, 0), 64);
    return Var0;
  }
  if (((func_373(bParam0, 28) || func_373(PLAYER::PLAYER_ID(), 28)) || func_5036(bParam0)) && !func_5035(bParam0))
  {
    StringCopy(&Var0, func_5037(bParam0, 0), 64);
    return Var0;
  }
  bVar16 = func_1305(bParam0);
  if (bVar16 != PLAYER::PLAYER_ID())
  {
    if (!MISC::IS_DURANGO_VERSION() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
    {
      StringCopy(&Var0, func_5037(bParam0, 0), 64);
      return Var0;
    }
  }
  if (bVar16 != func_357())
  {
    return Global_1630816[bVar16 /*597*/].f_11.f_105;
  }
  StringCopy(&Var0, "", 64);
  return Var0;
}