// fmmc_launcher.ysc @ L573072
int func_8897(struct<13> Param0)
{
  struct<13> Var0[1];
  var uVar14;
  
  Var0[0 /*13*/] = { Param0 };
  NETWORK::FILLOUT_PM_PLAYER_LIST(&Var0, 1, 102);
  if (NETWORK::REFRESH_PLAYER_LIST_STATS(102))
  {
    if (NETWORK::NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(&Param0))
    {
      if (NETWORK::NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(&uVar14))
      {
        if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uVar14, &Param0))
        {
          if ((func_11179() || func_4960()) || (NETWORK::_0x4AD490AE1536933B(102, &Param0) && NETWORK::NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(102, &Param0)))
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}