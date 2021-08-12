// ambush_rnc_type1.ysc @ L8740
bool func_296(int iParam0, float fParam1)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;

  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
    vVar3 = { vVar0 };
    vVar6 = { vVar3 };
    vVar3.x = (vVar3.x - fParam1);
    vVar3.f_1 = (vVar3.y - fParam1);
    vVar3.f_2 = (vVar3.z - fParam1);
    vVar6.x = (vVar6.x + fParam1);
    vVar6.f_1 = (vVar6.y + fParam1);
    vVar6.f_2 = (vVar6.z + fParam1);
    if (MISC::IS_PROJECTILE_IN_AREA(vVar3, vVar6, true))
    {
      return true;
    }
  }
  return false;
}