// fmmc_launcher.ysc @ L594000
char* func_9454(int* iParam0)
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
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, iParam0))
      {
        return NETWORK::NETWORK_GET_FRIEND_NAME(iVar0);
      }
    }
    iVar0++;
  }
  return "";
}