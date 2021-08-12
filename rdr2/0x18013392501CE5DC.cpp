// beat_bear_trap.ysc @ L3926
int func_107(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = ITEMSET::CREATE_ITEMSET(true);
  iVar1 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_24, iVar0, iParam0, false, false);
  if (iVar1 == 0)
  {
    ITEMSET::DESTROY_ITEMSET(iVar0);
    return 0;
  }
  iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iParam1, iVar0);
  ITEMSET::DESTROY_ITEMSET(iVar0);
  return MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2);
}