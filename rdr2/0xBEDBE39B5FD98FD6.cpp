// spd_dorotheawicklow1.ysc @ L4120
void func_150()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar0 = ITEMSET::CREATE_ITEMSET(true);
  iVar4 = ENTITY::_0x886171A12F400B89(iLocal_172, iVar0, 1);
  iVar3 = 0;
  while (iVar3 < iVar4)
  {
    iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0);
    iVar2 = iVar1;
    if (!ENTITY::IS_ENTITY_DEAD(iVar2))
    {
      if (((PED::IS_PED_HUMAN(iVar2) && !PED::IS_PED_A_PLAYER(iVar2)) && iVar2 != iLocal_163) && PED::_IS_PED_USING_SCENARIO_HASH(iVar2, joaat("WORLD_HUMAN_STAND_WAITING")))
      {
        if (!TASK::_0xBEDBE39B5FD98FD6(iVar2) && !PED::_0x77525BBF433F2CD6(iVar2))
        {
          TASK::_TASK_MOVE_IN_TRAFFIC(iVar2, -1082130432 /* Float: -1f */, 0, 0);
          iVar6++;
        }
      }
      iVar5++;
    }
    iVar3++;
  }
  ITEMSET::DESTROY_ITEMSET(iVar0);
}