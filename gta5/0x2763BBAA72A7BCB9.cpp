// fmmc_launcher.ysc @ L619807
int func_10146()
{
  struct<13> Var0;
  
  if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
  {
    return func_10147();
  }
  else if (NETWORK::NETWORK_IS_IN_TRANSITION())
  {
    Var0 = { func_708() };
    return NETWORK::NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(&Var0);
  }
  return 0;
}