// beat_town_widow.ysc @ L13475
bool func_394(int iParam0, vector3 vParam1, float fParam4)
{
  float fVar0;
  float fVar1;
  vector3 vVar2;
  var uVar5;
  var uVar8;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &fVar0, &uVar5);
  vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vParam1) };
  if (func_532(&vVar2, 50, 10, 0))
  {
    MISC::GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(vVar2 + Vector(1f, 0f, 0f), &fVar1, &uVar8);
    fVar11 = (fVar0 - fVar1);
    fVar12 = (fVar11 / 1f);
    fVar13 = MISC::ATAN(fVar12);
    fVar14 = MISC::ABSF(fVar13);
    if (fVar14 < fParam4)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  return false;
}