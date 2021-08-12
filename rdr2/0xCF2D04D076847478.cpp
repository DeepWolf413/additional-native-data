// abigail2_1.ysc @ L78900
int func_2305(int iParam0, var uParam1, bool bParam2)
{
  int iVar0;

  iVar0 = -1;
  if (bParam2)
  {
    if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
    {
      if (UNK_0x3745C002F5A21C45(iVar0, uParam1, 28))
      {
        if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
        {
          func_2479(iVar0, 1);
          return iVar0;
        }
        NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
      }
      else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
      {
        NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
      }
      func_2479(iVar0, 2);
      return -1;
    }
  }
  else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
  {
    func_2479(iVar0, 1);
    return iVar0;
  }
  return -1;
}