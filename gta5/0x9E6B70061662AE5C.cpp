// business_battles_defend.ysc @ L297021
int func_5102(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
      iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
      iVar2 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar1, iVar0);
      if (iVar2 != 1)
      {
        return 1;
      }
    }
  }
  return 0;
}