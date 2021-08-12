// player_horse.ysc @ L11805
int func_357(int iParam0, int iParam1)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
  {
    return 0;
  }
  if (func_652(iParam1, &iVar0))
  {
    return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
  }
  return 0;
}