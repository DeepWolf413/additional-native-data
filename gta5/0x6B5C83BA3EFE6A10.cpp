// fmmc_launcher.ysc @ L436216
int func_7262(int* iParam0, int* iParam1)
{
  if (func_5130() || func_4962())
  {
    return 0;
  }
  if (func_4960() || func_11179())
  {
    if (func_792(*iParam1))
    {
      if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, iParam1))
      {
        return 1;
      }
    }
  }
  else if (NETWORK::NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(iParam0))
  {
    return 1;
  }
  return 0;
}