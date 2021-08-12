// abigail2_1.ysc @ L33635
char* func_740(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return "";
  }
  if (ENTITY::IS_ENTITY_A_PED(iParam0))
  {
    return func_1210(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
  }
  else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
  {
    return func_1211(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
  }
  else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
  {
    return func_1212(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
  }
  return "";
}