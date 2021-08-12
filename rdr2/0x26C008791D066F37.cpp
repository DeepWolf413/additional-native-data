// property_use_core.ysc @ L64996
int func_2223(int* iParam0)
{
  int iVar0;

  iVar0 = func_2331(iParam0->f_1);
  if (iVar0 == 0)
  {
    if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0->f_1, &iVar0))
    {
    }
  }
  return iVar0;
}