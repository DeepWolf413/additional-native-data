// camp_beechershope.ysc @ L67016
int func_2111(int iParam0, bool bParam1)
{
  float fVar0;
  float fVar1;

  if (bParam1)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
    {
      return 0;
    }
    if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
    {
      return 0;
    }
  }
  fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
  fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
  if (fVar1 <= 1.5f)
  {
    return 1;
  }
  return 0;
}