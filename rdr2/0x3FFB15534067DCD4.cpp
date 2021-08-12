// act_bankrobbery01.ysc @ L13265
void func_274(var uParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  LAW::_0x9C8A2BF37E966464(PLAYER::PLAYER_ID(), iVar0);
  iVar1 = 0;
  while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
  {
    iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
    if (ENTITY::DOES_ENTITY_EXIST(iVar2))
    {
      PED::DELETE_PED(&iVar2);
    }
    iVar1++;
  }
  if (ITEMSET::IS_ITEMSET_VALID(iVar0))
  {
    ITEMSET::DESTROY_ITEMSET(iVar0);
  }
  iVar3 = 7;
  while (iVar3 <= 18)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_40[iVar3]))
    {
      PED::DELETE_PED(&(uParam0->f_40[iVar3]));
    }
    iVar3++;
  }
}