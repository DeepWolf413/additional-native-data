// am_armwrestling.ysc @ L124582
void func_1250(bool bParam0, bool bParam1)
{
  NETWORK::NETWORK_BLOCK_INVITES(bParam0);
  NETWORK::_0x4A9FDE3A5A6D0437(bParam0);
  if (NETWORK::NETWORK_IS_HOST())
  {
    NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(bParam1);
  }
}