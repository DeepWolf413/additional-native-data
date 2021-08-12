// abigail21_outro.ysc @ L1677
void func_83(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar0 = func_42(iParam0);
  if (!PED::_IS_PED_CARRYING(iVar0))
  {
    return;
  }
  iVar1 = ITEMSET::CREATE_ITEMSET(true);
  PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
  iVar2 = 0;
  while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
  {
    iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
    if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
    {
    }
    else
    {
      if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
      {
        ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
      }
      ENTITY::_DELETE_CARRIABLE(&iVar3);
    }
    iVar2++;
  }
}