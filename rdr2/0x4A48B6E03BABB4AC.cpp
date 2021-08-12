// abigail2_1.ysc @ L48658
void func_1224(int iParam0, char* sParam1, bool bParam2)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (ENTITY::IS_ENTITY_A_PED(iParam0))
    {
      if (bParam2)
      {
        PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
      }
      else
      {
        PED::_SET_PED_PROMPT_NAME(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), sParam1);
      }
    }
    else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
    {
      if (bParam2)
      {
        OBJECT::_0xD503D6F0986D58BC(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
      }
    }
  }
}