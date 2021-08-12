// abigail2_1.ysc @ L62758
void func_1669(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  int iVar1;

  if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && fParam2 > 0f)
  {
    if (ENTITY::IS_ENTITY_A_PED(iParam0))
    {
      iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
      PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
      PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
      PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
      PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
      if (iParam3 == 1)
      {
        PED::SET_PED_CONFIG_FLAG(iVar0, 359, true);
      }
    }
    else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
    {
      iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
      OBJECT::_0xA22712E8471AA08E(iVar1, 1, 1);
    }
    MISC::_0x870708A6E147A9AD(iParam0, sParam1, fParam2, iParam4, iParam5, 0, 0, 0, 0, -1);
  }
}