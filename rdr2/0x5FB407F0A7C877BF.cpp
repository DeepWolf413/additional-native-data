// beechers2_2.ysc @ L41418
void func_890(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (!PROPSET::_DOES_PROPSET_EXIST(iParam0))
  {
    return;
  }
  iVar0 = ITEMSET::CREATE_ITEMSET(true);
  iVar3 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, 0, false, false);
  iVar4 = 0;
  while (iVar4 <= (iVar3 - 1))
  {
    iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
    if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
    {
      iVar2 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar1);
      if (ENTITY::DOES_ENTITY_EXIST(iVar2))
      {
        ENTITY::SET_ENTITY_LOD_DIST(iVar2, iParam1);
      }
    }
    iVar4++;
  }
}