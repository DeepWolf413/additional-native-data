// appinternet.ysc @ L82552
void func_1108(int iParam0, int iParam1)
{
  if (iParam0 >= 2500000)
  {
    MONEY::_0x31BA138F6304FB9F(2499999, iParam1);
    iParam0 = (iParam0 - 2499999);
  }
  if (func_758())
  {
    NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_326(func_327()));
  }
  MONEY::_0x31BA138F6304FB9F(iParam0, iParam1);
}