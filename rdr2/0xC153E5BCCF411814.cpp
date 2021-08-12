// beat_sharp_shooter.ysc @ L28135
bool func_754()
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_284, 0, 0f, 0f, 0.5f) };
  vVar3 = { PED::GET_PED_BONE_COORDS(iLocal_284, 0, 0f, 0f, 0f) };
  vVar6 = { PED::GET_PED_BONE_COORDS(iLocal_284, 0, 0f, 0f, -0.5f) };
  fVar9 = func_107(WEAPON::_IS_WEAPON_SHOTGUN(func_432(Global_35, 0, 1, 0)), 0.35f, 0f);
  fVar10 = (0.5f + fVar9);
  fVar11 = (0.75f + fVar9);
  fVar12 = (0.75f + fVar9);
  if (((((MISC::IS_BULLET_IN_AREA(vVar0, fVar10, true) || MISC::IS_BULLET_IN_AREA(vVar3, fVar11, true)) || MISC::IS_BULLET_IN_AREA(vVar6, fVar12, true)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, fVar10, true, true)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar3, fVar11, true, true)) || MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar6, fVar12, true, true))
  {
    return true;
  }
  return false;
}