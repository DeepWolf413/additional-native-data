// camp_beaverhollow.ysc @ L13231
int func_434(int iParam0)
{
  vector3 vVar0;
  int iVar3;

  ITEMSET::_CLEAR_ITEMSET(iParam0);
  vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
  PED::_0x7BE607DAFF382FD2(Global_35, iParam0, 512);
  PED::_0x3ACCE14DFA6BA8C2(Global_35, 4, vVar0, 100f, iParam0);
  PED::_0x3ACCE14DFA6BA8C2(Global_35, 6, vVar0, 100f, iParam0);
  PED::_0x3ACCE14DFA6BA8C2(Global_35, 5, vVar0, 100f, iParam0);
  iVar3 = ITEMSET::GET_ITEMSET_SIZE(iParam0);
  return iVar3;
}