// abigail2_1.ysc @ L62857
void func_1673(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
  int iVar0;
  int iVar1;

  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (ENTITY::IS_ENTITY_A_PED(iParam0))
    {
      iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
      PED::SET_PED_CONFIG_FLAG(iVar0, 130, bParam1);
      PED::SET_PED_CONFIG_FLAG(iVar0, 315, bParam1);
      PED::SET_PED_CONFIG_FLAG(iVar0, 297, bParam3);
      PED::SET_PED_CONFIG_FLAG(iVar0, 317, false);
      PED::SET_PED_CONFIG_FLAG(iVar0, 359, false);
    }
    else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
    {
      iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
      OBJECT::_0xA22712E8471AA08E(iVar1, 0, 0);
    }
    if (iParam2 == 1)
    {
      MISC::_0xE98D55C5983F2509(iParam0);
    }
  }
}