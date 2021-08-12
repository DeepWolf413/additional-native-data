// native_son2.ysc @ L71754
bool func_1937(vector3 vParam0, float fParam3)
{
  return FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vParam0 - Vector(fParam3, fParam3, fParam3), vParam0 + Vector(fParam3, fParam3, fParam3));
}