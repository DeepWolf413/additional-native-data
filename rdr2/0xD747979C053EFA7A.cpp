// abigail2_1.ysc @ L85739
void func_2586(int iParam0)
{
  int iVar0;

  iVar0 = Global_1360165[iParam0 /*1157*/];
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
  {
    return;
  }
  if (!func_452(iParam0))
  {
    return;
  }
  if (!PED::IS_PED_IN_GROUP(iVar0))
  {
    return;
  }
  if (PED::GET_PED_GROUP_INDEX(iVar0) != PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()))
  {
    return;
  }
  if (PED::_0x917760CFE7A0E0F1(iVar0))
  {
    COMPANION::_0xD747979C053EFA7A(func_2190());
  }
  PED::SET_PED_CONFIG_FLAG(iVar0, 279, false);
  PED::REMOVE_PED_FROM_GROUP(iVar0);
  func_2599(iParam0, 0, 0);
}