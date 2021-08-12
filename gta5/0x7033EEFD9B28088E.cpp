// freemode.ysc @ L145742
void func_1756(bool bParam0, bool bParam1)
{
  struct<14> Var0;
  struct<13> Var14;
  
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (!func_1758())
    {
      if (bParam0 != -1)
      {
        if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
        {
          NETWORK::_SET_RELATIONSHIP_TO_PLAYER(bParam0, true);
          func_119(&(Global_1683467[bParam0 /*5*/].f_2), 0, 0);
          if (bParam1)
          {
            func_1707("GRIEF_TICK_VIC", bParam0, 0, 0, 0, 1, 0);
          }
          Var0.f_10 = PLAYER::PLAYER_ID();
          Var0.f_2 = 905984695;
          func_1757(Var0, func_20179(bParam0));
          if (MISC::IS_BIT_SET(Global_1573914, 3))
          {
            MISC::SET_BIT(&Global_1573914, 7);
          }
          Var14 = { func_47(bParam0) };
          STATS::_0x7033EEFD9B28088E(&Var14);
        }
      }
    }
  }
}