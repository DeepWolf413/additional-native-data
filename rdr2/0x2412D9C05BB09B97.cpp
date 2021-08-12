// abigail2_1.ysc @ L80651
bool func_2380(int iParam0, vector3 vParam1)
{
  vector3 vVar0;
  vector3 vVar3;

  vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
  vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
  return func_2510(vVar0, vVar3, vParam1);
}