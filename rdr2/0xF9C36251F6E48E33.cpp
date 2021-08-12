// grays1.ysc @ L59594
bool func_1375()
{
  if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vLocal_81, joaat("WEAPON_THROWN_DYNAMITE"), (fLocal_752 + 4f), false) || OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("PICKUP_WEAPON_THROWN_DYNAMITE"), vLocal_81, fLocal_752))
  {
    return true;
  }
  return false;
}