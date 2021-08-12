// am_armwrestling.ysc @ L112730
int func_790()
{
  int iVar0;
  int iVar1;
  int iVar2;
  struct<13> Var3;
  
  if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_2453903.f_6529), 13))
  {
    return 0;
  }
  iVar2 = PLAYER::PLAYER_ID();
  iVar1 = 0;
  while (iVar1 < 32)
  {
    iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
    if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && bVar0 != iVar2)
    {
      Var3 = { func_92(bVar0) };
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var3, &(Global_2453903.f_6529)) && func_792(bVar0))
      {
        func_791();
        return 1;
      }
    }
    iVar1++;
  }
  return 0;
}