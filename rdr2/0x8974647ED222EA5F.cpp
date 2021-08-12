// mudtown3.ysc @ L103792
bool func_3019(int iParam0, float fParam1)
{
  float fVar0;
  float fVar1;
  vector3 vVar2;
  vector3 vVar5;

  fVar0 = 0f;
  fVar1 = 0f;
  if (!func_457(*iParam0, 1))
  {
    return false;
  }
  if (!ENTITY::IS_ENTITY_IN_WATER(*iParam0))
  {
    return false;
  }
  vVar5 = { ENTITY::GET_ENTITY_COORDS(*iParam0, false, false) };
  if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar1, false) && WATER::TEST_PROBE_AGAINST_ALL_WATER(vVar5 + Vector(50f, 0f, 0f), vVar5 - Vector(50f, 0f, 0f), 0, &vVar2) == 1)
  {
    fVar0 = (vVar2.z - fVar1);
    if (fVar0 >= fParam1)
    {
      return true;
    }
  }
  return false;
}