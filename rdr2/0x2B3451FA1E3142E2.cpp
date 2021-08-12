// act_caunc_rustling.ysc @ L30987
bool func_762(vector3 vParam0)
{
  float fVar0;
  float fVar1;
  bool bVar2;
  bool bVar3;

  vParam0.f_2 = (vParam0.z + 10f);
  bVar2 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vParam0, 1, &fVar0);
  bVar3 = MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &fVar1, false);
  if (bVar2 == 1 || (bVar3 == 1 && fVar0 > fVar1))
  {
    return true;
  }
  return false;
}