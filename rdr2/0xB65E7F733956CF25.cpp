// av_sheep_grazing.ysc @ L4016
void func_80(var uParam0)
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
      if (func_71(iVar3, 0))
      {
        TASK::CLEAR_PED_TASKS(iVar3, true, false);
        TASK::TASK_PERSISTENT_CHARACTER(iVar3);
        PED::SET_PED_KEEP_TASK(iVar3, true);
      }
      iVar0++;
    }
    if (PERSCHAR::_0x800DF3FC913355F3(func_150(iLocal_71)))
    {
      PERSCHAR::_0xB65E7F733956CF25(func_150(iLocal_71));
    }
  }
}