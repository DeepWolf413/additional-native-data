// short_update.ysc @ L29510
int func_891(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
  }
  iVar0 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iParam0, func_2175());
  return iVar0;
}