// beat_dark_alley_stabber.ysc @ L6680
bool func_182(int iParam0, int iParam1)
{
  var uVar0;
  vector3 vVar3;
  var uVar6;
  vector3 vVar9;
  vector3 vVar12;
  vector3 vVar15;
  float fVar18;

  if (func_53(iParam1, 0, 1))
  {
    ENTITY::GET_ENTITY_MATRIX(iParam1, &uVar0, &vVar3, &uVar6, &vVar9);
  }
  if (func_53(iParam0, 0, 1))
  {
    vVar12 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
  }
  vVar15 = { vVar12 - vVar9 };
  fVar18 = func_361(vVar15, vVar3);
  if (fVar18 < 0f)
  {
    return false;
  }
  return true;
}