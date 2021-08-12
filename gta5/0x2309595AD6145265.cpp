// director_mode.ysc @ L124682
void func_848()
{
  struct<13> Var0[1];
  int iVar14;
  
  if (!iLocal_13726)
  {
    if (HUD::GET_CURRENT_FRONTEND_MENU_VERSION() == -2060115030)
    {
      Var0[0 /*13*/] = { func_773() };
      if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
      {
        iVar14 = MISC::GET_GAME_TIMER();
        while ((!func_850(&Var0) && NETWORK::NETWORK_IS_SIGNED_ONLINE()) && (MISC::GET_GAME_TIMER() - iVar14) < 10000)
        {
          func_849(1, "while waiting for stats");
          SYSTEM::WAIT(0);
        }
        iLocal_13726 = 1;
      }
    }
  }
}