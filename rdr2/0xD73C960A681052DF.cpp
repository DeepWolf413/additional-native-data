// beat_bandito_breakout.ysc @ L2781
bool func_82(int iParam0, float fParam1)
{
  var uVar0;

  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_THROWN_DYNAMITE"), fParam1, &uVar0, 0, 0))
    {
      return true;
    }
    if (MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam0, joaat("WEAPON_THROWN_MOLOTOV"), fParam1, &uVar0, 0, 0))
    {
      return true;
    }
  }
  return false;
}