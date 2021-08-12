// property_use_core.ysc @ L65027
bool func_2225(int* iParam0, int iParam1)
{
  if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
  {
    if (!func_2332(iParam0, iParam1))
    {
      return false;
    }
  }
  else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0) != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
  {
    if (!func_2333(iParam0))
    {
      return false;
    }
    if (!func_2332(iParam0, iParam1))
    {
      return false;
    }
  }
  return true;
}