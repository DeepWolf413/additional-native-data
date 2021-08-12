// emeraldranch.ysc @ L6095
void func_184(int iParam0, vector3 vParam1, float fParam4)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar0 = ITEMSET::CREATE_ITEMSET(true);
  iVar2 = ENTITY::_0x886171A12F400B89(iParam0, iVar0, 2);
  iVar1 = 0;
  while (iVar1 < iVar2)
  {
    iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
    if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
    {
      iVar4 = MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(iVar3);
      if (ENTITY::DOES_ENTITY_EXIST(iVar4))
      {
        func_263(iVar4, vParam1, fParam4, 2, 1073741824 /* Float: 2f */);
        vParam1.x = (vParam1.x + 5f);
      }
    }
    iVar1++;
  }
  ITEMSET::DESTROY_ITEMSET(iVar0);
}