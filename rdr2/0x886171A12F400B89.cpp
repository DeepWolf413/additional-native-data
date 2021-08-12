// av_shopkeeper_restock.ysc @ L4077
bool func_100(int iParam0)
{
  int iVar0;
  int iVar1;

  iLocal_58 = ENTITY::_0x886171A12F400B89(iParam0, iLocal_60, 3);
  if (iLocal_58 > 0)
  {
    iVar1 = 0;
    while (iVar1 < iLocal_58)
    {
      iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_60);
      if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar0))
      {
        MISC::_0x553D67295DDD2309(iVar0);
      }
      iVar1++;
    }
    return true;
  }
  return false;
}