// am_casino_peds.ysc @ L308209
int func_4218(int iParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) || iParam1)
    {
      if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
      {
        if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}