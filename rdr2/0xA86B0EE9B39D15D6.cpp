// abigail2_1_intro.ysc @ L1446
int func_58(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
  {
    return 0;
  }
  iVar0 = 0;
  while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_5))
  {
    iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_5));
    if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
    {
      iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
      EVENT::_0xA86B0EE9B39D15D6(&iVar2);
    }
    else if (ENTITY::IS_ENTITY_A_PED(iVar1))
    {
      ANIMSCENE::_0xBC781D24AA11F179(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
    }
    iVar0++;
  }
  ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
  return 1;
}