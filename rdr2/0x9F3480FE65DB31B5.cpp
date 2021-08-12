// abigail2_1.ysc @ L85633
void func_2582(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;

  iVar0 = Global_1360165[iParam0 /*1157*/];
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(iVar0))
  {
    return;
  }
  if (!func_452(iParam0))
  {
    return;
  }
  iVar1 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
  if (PED::IS_PED_GROUP_MEMBER(iVar0, iVar1, 0))
  {
    return;
  }
  COMPANION::_0xCBD9EC60495C728C(func_2190());
  PED::SET_PED_CONFIG_FLAG(iVar0, 279, true);
  PED::SET_PED_AS_GROUP_MEMBER(iVar0, iVar1);
  if (bParam1)
  {
    func_2599(iParam0, 1, Global_35);
  }
}