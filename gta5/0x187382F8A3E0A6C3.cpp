// appcovertops.ysc @ L6875
int func_219(int iParam0)
{
  int iVar0;
  
  iVar0 = NETWORK::NETWORK_GET_CONTENT_MODIFIER_LIST_ID(iParam0);
  if (iVar0 >= 0)
  {
    return iVar0 + 28;
  }
  return 27;
}