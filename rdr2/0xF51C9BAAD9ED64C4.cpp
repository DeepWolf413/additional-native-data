// bjack_launch_sp.ysc @ L3560
int func_108(vector3 vParam0, float fParam3, bool bParam4)
{
  if (bParam4)
  {
    if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vParam0, joaat("WEAPON_THROWN_DYNAMITE"), fParam3, false) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vParam0, joaat("WEAPON_THROWN_MOLOTOV"), fParam3, false))
    {
      return 1;
    }
  }
  if ((((((FIRE::IS_EXPLOSION_IN_SPHERE(25, vParam0, fParam3) || FIRE::IS_EXPLOSION_IN_SPHERE(0, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(30, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(31, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(29, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(26, vParam0, fParam3))
  {
    return 1;
  }
  return 0;
}