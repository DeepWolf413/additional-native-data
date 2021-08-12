// am_mp_property_ext.ysc @ L304788
int func_4565(int iParam0)
{
  int iVar0;
  bool bVar1;
  int iVar2;
  
  if (func_761())
  {
    iVar0 = 0;
    bVar1 = false;
    if (func_4560(iParam0))
    {
      if (!func_4559(iParam0))
      {
        iVar0 = 1;
      }
      else
      {
        bVar1 = true;
      }
    }
    iVar2 = func_4557(iParam0, iVar0, bVar1);
    if (NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar2))
    {
      return NETSHOPPING::NET_GAMESERVER_GET_PRICE(iVar2, 426439576, true);
    }
  }
  return Global_1049961[iParam0 /*1951*/].f_32;
}