// player_horse.ysc @ L18320
int func_643(int iParam0, int iParam1)
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
  if (func_641(iParam1, &iVar0))
  {
    return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
  }
  return 0;
}