// gang3_intro.ysc @ L3137
bool func_142(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_20))
  {
    return false;
  }
  VEHICLE::_GET_ROWING_OARS(iLocal_20, uParam0[0], uParam0[1]);
  return (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]) && ENTITY::DOES_ENTITY_EXIST((*uParam0)[1]));
}