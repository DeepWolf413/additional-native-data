// native1.ysc @ L50882
void func_1208(var uParam0, int iParam1, int iParam2)
{
  int iVar0;
  var uVar1;

  TASK::_0x9C8F42A5D1859DC1(uParam0);
  TASK::_0xB8E213D02F37947D(uParam0, *iParam1, iParam2, 0, 0, 0, 0);
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(*iParam1))
  {
    uVar1 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar0, *iParam1);
    TASK::_0x5A40040BB5AE3EA2(uVar1);
    iVar0++;
  }
}