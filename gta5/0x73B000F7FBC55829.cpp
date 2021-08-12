// fmmc_launcher.ysc @ L558666
int func_8644(int* iParam0)
{
  int iVar0;
  struct<13> Var1;
  int iVar14;
  
  if (!func_792(*iParam0))
  {
    return 0;
  }
  Global_2460808 = 0;
  iVar0 = 0;
  while (iVar0 < 32)
  {
    Global_2460808.f_1[iVar0 /*29*/] = { Var1 };
    StringCopy(&(Global_2460808.f_1[iVar0 /*29*/].f_13), "", 64);
    iVar0++;
  }
  iVar14 = NETWORK::NETWORK_GET_TRANSITION_MEMBERS(&Global_2460808, 32);
  iVar0 = 0;
  while (iVar0 <= (iVar14 - 1))
  {
    if (func_792(Global_2460808.f_1[iVar0 /*29*/]))
    {
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, &(Global_2460808.f_1[iVar0 /*29*/])))
      {
        return 1;
      }
    }
    iVar0++;
  }
  return 0;
}