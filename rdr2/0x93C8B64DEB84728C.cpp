// act_bankrobbery01.ysc @ L23974
bool func_648(int iParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (ENTITY::IS_ENTITY_A_PED(iParam0))
    {
      if (ENTITY::IS_ENTITY_DEAD(iParam0))
      {
        if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
        {
          return true;
        }
      }
    }
  }
  return false;
}