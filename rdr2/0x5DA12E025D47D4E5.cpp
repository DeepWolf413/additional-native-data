// bounty1.ysc @ L63782
void func_1701(int iParam0, int iParam1)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
  {
  }
  ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, 7, iParam1);
}