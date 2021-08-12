// am_mp_arcade.ysc @ L316107
int func_5025(int iParam0, char* sParam1)
{
  char cVar0[64];
  char cVar16[64];
  
  if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
  {
    return 1;
  }
  StringCopy(&cVar0, sParam1, 64);
  StringIntConCat(&cVar0, iParam0, 64);
  StringCopy(&cVar16, "VEM_INSURANCE_NONE", 64);
  if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar16)))
  {
    return 1;
  }
  return func_5061(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar16), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}