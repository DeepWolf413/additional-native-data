// abigail2_1.ysc @ L83492
bool func_2502(int iParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (bParam1)
    {
      return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
    }
    else
    {
      return ENTITY::IS_ENTITY_DEAD(iParam0);
    }
  }
  return true;
}