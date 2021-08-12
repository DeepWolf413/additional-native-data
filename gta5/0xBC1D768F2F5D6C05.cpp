// act_cinema.ysc @ L4217
int func_111(bool bParam0)
{
  if (func_113())
  {
    if (func_112(NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(bParam0), &(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_353.f_4)))
    {
      return 1;
    }
  }
  return 0;
}