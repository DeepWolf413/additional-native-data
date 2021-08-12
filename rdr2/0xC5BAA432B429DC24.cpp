// beat_herbalist_camp.ysc @ L5721
int func_155(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;

  if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
  {
    return 0;
  }
  iVar0 = 0;
  while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
  {
    iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616));
    if (ENTITY::DOES_ENTITY_EXIST(iVar1))
    {
      if (ENTITY::GET_ENTITY_MODEL(iVar1) == iParam0)
      {
        if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
        {
          ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
        }
        if (bParam1)
        {
          ITEMSET::REMOVE_FROM_ITEMSET(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), Global_43616);
        }
        return iVar1;
      }
    }
    iVar0++;
  }
  return 0;
}