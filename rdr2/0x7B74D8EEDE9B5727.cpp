// av_sheep_grazing.ysc @ L3421
void func_67(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  if (ITEMSET::IS_ITEMSET_VALID(iLocal_73))
  {
    iVar1 = ITEMSET::GET_ITEMSET_SIZE(iLocal_73);
    iVar0 = 0;
    while (iVar0 < iVar1)
    {
      iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iLocal_73);
      iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar2);
      if (!ENTITY::IS_ENTITY_DEAD(iVar3))
      {
        TASK::CLEAR_PED_TASKS(iVar3, true, false);
        TASK::_TASK_FLEE_FROM_PED(iVar3, Global_35, vLocal_77, -1f, 10000, 1280, 1.5f, 0);
        PED::SET_PED_KEEP_TASK(iVar3, true);
      }
      iVar0++;
    }
  }
}