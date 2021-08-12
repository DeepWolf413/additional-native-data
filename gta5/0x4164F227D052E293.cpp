// fmmc_launcher.ysc @ L593978
char* func_9453(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
  int iVar0;
  struct<13> Var1;
  
  iVar0 = 0;
  while (iVar0 <= (NETWORK::NETWORK_GET_FRIEND_COUNT() - 1))
  {
    func_5147(&Var1);
    Var1 = { func_8814(iVar0) };
    if (func_792(Var1))
    {
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, &uParam0))
      {
        return NETWORK::_NETWORK_GET_FRIEND_NAME_FROM_INDEX(iVar0);
      }
    }
    iVar0++;
  }
  return "";
}