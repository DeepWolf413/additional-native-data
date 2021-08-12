// rcm_callaway2.ysc @ L26705
bool func_879(vector3 vParam0, float fParam3)
{
  vector3 vVar0;
  vector3 vVar3;

  vVar0 = { vParam0 };
  vVar3 = { vVar0 };
  vVar0.x = (vVar0.x - fParam3);
  vVar0.f_1 = (vVar0.y - fParam3);
  vVar0.f_2 = (vVar0.z - fParam3);
  vVar3.x = (vVar3.x + fParam3);
  vVar3.f_1 = (vVar3.y + fParam3);
  vVar3.f_2 = (vVar3.z + fParam3);
  if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar0, vVar3, joaat("WEAPON_THROWN_DYNAMITE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar0, vVar3, joaat("WEAPON_THROWN_MOLOTOV"), true))
  {
    return true;
  }
  return false;
}