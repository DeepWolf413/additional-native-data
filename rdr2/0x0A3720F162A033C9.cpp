// beat_bounty_transport.ysc @ L3354
bool func_75(vector3 vParam0, int iParam3, float fParam4, bool bParam5)
{
  float fVar0;
  vector3 vVar1;
  vector3 vVar4;

  fVar0 = (fParam4 * 0.5f);
  vVar1 = { vParam0 - Vector(fVar0, fVar0, fVar0) };
  vVar4 = { vParam0 + Vector(fVar0, fVar0, fVar0) };
  if (!bParam5 && *iParam3 != 1)
  {
    *iParam3 = 1;
  }
  switch (*iParam3)
  {
    case 0:
      if (bParam5)
      {
        STREAMING::REQUEST_COLLISION_AT_COORD(vParam0);
      }
      *iParam3++;
      break;
    case 1:
      if (PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar1, vVar4))
      {
        return true;
      }
      break;
  }
  return false;
}