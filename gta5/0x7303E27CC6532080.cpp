// appinternet.ysc @ L253719
int func_2400(int iParam0)
{
  var uVar0;
  
  if (iParam0 == -1)
  {
    return 0;
  }
  if (MONEY::_NETWORK_CAN_SPEND_MONEY_2(iParam0, false, false, false, &uVar0, -1, 0))
  {
    return 1;
  }
  return 0;
}