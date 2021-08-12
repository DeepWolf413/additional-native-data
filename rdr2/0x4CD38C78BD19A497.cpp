// abigail2_1.ysc @ L53278
void func_1383(char[4] cParam0)
{
  int iVar0;
  int iVar1;

  if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
  {
    return;
  }
  iVar0 = (ITEMSET::GET_ITEMSET_SIZE(Global_43616) - 1);
  while (iVar0 >= 0)
  {
    iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616));
    if (ENTITY::DOES_ENTITY_EXIST(iVar1))
    {
      if (DECORATOR::DECOR_EXIST_ON(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_43616), func_1859()))
      {
        if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
        {
          ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
        }
        ENTITY::DELETE_ENTITY(&iVar1);
      }
    }
    iVar0 = (iVar0 + -1);
  }
}