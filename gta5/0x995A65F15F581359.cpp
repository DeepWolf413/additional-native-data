// am_gang_call.ysc @ L17409
int func_491(int iParam0)
{
  if (func_51())
  {
    if (func_494(iParam0))
    {
      if (func_493(iLocal_489) == 2)
      {
        NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_492(iLocal_489));
        MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, false, false);
        func_323(iLocal_489);
        return 1;
      }
      else
      {
        func_323(iLocal_489);
        return 0;
      }
    }
  }
  else
  {
    return 1;
  }
  return -1;
}