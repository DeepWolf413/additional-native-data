// act_bankrobbery01.ysc @ L21043
bool func_522(float fParam0, float fParam1)
{
  vector3 vVar0;
  vector3 vVar3;

  vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, fParam0, fParam0, fParam1) };
  vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -fParam0, -fParam0, -fParam1) };
  return FIRE::_GET_ENTITY_INSIDE_EXPLOSION_AREA(-1, vVar0, vVar3, fParam0) == func_1011(Global_35);
}