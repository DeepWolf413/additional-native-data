// rcm_mason4.ysc @ L35732
bool func_1172(var uParam0)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  vector3 vVar9;

  vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
  vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false) };
  vVar6 = { ENTITY::_0x935A30AA88FB1014(iLocal_14) };
  vVar9 = { vVar0 - vVar3 };
  if (func_1622(vVar6, vVar9) >= 0f)
  {
    return true;
  }
  return false;
}