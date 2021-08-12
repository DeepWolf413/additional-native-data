// appcovertops.ysc @ L7498
int func_243(int iParam0, int iParam1)
{
  if (iParam0 == -1)
  {
    return func_244();
  }
  return NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, iParam1);
}