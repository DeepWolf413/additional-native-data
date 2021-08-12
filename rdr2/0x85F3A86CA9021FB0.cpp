// beat_bear_trap.ysc @ L9966
void func_284(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, float fParam7, bool bParam8, bool bParam9)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = ITEMSET::CREATE_ITEMSET(true);
  *iParam0 = PROPSET::_CREATE_PROPSET(iParam1, vParam2, iParam5, fParam6, fParam7, bParam8, bParam9);
  iVar0 = PROPSET::_GET_ENTITIES_FROM_PROPSET(*iParam0, iVar2, 0, false, false);
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar2);
    iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar3);
    ENTITY::_0xA91E6CF94404E8C9(iVar4);
    iVar1++;
  }
  ITEMSET::_CLEAR_ITEMSET(iVar2);
  ITEMSET::CLEAN_ITEMSET(iVar2);
  ITEMSET::DESTROY_ITEMSET(iVar2);
}