// act_bankrobbery01.ysc @ L57161
bool func_1837(int iParam0, int iParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
    {
      return true;
    }
    if (func_1970(iParam0, iParam1, 1, 1) < 4f)
    {
      if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
      {
        return true;
      }
    }
  }
  return false;
}