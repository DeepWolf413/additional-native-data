// event_area_appleseed_stg1.ysc @ L16147
void func_425()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = ITEMSET::CREATE_ITEMSET(false);
  if (ITEMSET::IS_ITEMSET_VALID(iVar1))
  {
    iVar2 = ENTITY::_0x886171A12F400B89(iLocal_75[3], iVar1, 1);
    iVar0 = 0;
    while (iVar0 < iVar2)
    {
      iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
      if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
      {
        iVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
        if ((func_19(32) && !func_22(&Local_2160, 2)) && iVar4 == iLocal_2479[0])
        {
        }
        else
        {
          func_128(iVar4, 0, 0);
        }
      }
      iVar0++;
    }
  }
  ITEMSET::DESTROY_ITEMSET(iVar1);
}