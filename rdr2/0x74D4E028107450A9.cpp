// abigail2_1.ysc @ L14577
void func_50(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
    PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
  }
}