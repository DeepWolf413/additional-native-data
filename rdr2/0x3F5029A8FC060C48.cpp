// grays1.ysc @ L75637
bool func_1864(var uParam0)
{
  if (func_2321())
  {
    vLocal_847 = { ENTITY::GET_ENTITY_ROTATION(iLocal_662[0], 2) };
    return true;
  }
  if (VEHICLE::IS_VEHICLE_IN_BURNOUT(*uParam0))
  {
    return true;
  }
  return false;
}