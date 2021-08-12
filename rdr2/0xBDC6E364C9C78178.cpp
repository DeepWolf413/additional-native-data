// abigail2_1.ysc @ L66419
void func_1826(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_2311))
  {
    iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_2311);
    iVar0 = 0;
    while (iVar0 < iVar1)
    {
      iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_2311);
      if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
      {
        PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
      }
      iVar0++;
    }
  }
}