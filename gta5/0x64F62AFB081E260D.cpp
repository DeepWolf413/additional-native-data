// creator.ysc @ L118889
void func_1004(bool bParam0)
{
  int iVar0;
  
  if (bParam0)
  {
    if (NETWORK::NETWORK_IS_IN_SESSION() && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
    {
      NETWORK::NETWORK_FINISH_BROADCASTING_DATA();
    }
  }
  iVar0 = 0;
  while (iVar0 < 32)
  {
    func_1023(iVar0);
    iVar0++;
  }
  func_1005();
}