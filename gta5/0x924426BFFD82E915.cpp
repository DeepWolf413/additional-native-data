// maintransition.ysc @ L102987
void func_684()
{
  int iVar0;
  
  if (func_394(1) && func_391())
  {
    if (func_29(201))
    {
      func_683(&iVar0);
      if (iVar0 == 12)
      {
        NETWORK::NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS();
      }
      if (iVar0 == 11)
      {
        NETWORK::NETWORK_REQUEST_CLOUD_TUNABLES();
      }
      if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
      {
        func_34(58, -1, 32);
      }
      else
      {
        func_34(63, func_4397(), 32);
      }
    }
  }
}