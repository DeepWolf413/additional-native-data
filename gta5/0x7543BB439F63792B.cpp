// fmmc_playlist_controller.ysc @ L138785
int func_1032(int* iParam0)
{
  struct<35> Var0;
  
  if (PLAYER::PLAYER_ID())
  {
    if (func_493(iParam0))
    {
      Var0 = { func_1033(iParam0) };
      return NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Var0, 35);
    }
  }
  return 0;
}