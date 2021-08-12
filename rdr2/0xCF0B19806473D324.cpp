// marston1.ysc @ L71844
void func_1918(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, vector3 vParam9, float fParam12, int iParam13, int iParam14)
{
  if (!func_455(*uParam0, iLocal_961))
  {
    return;
  }
  func_1962(*uParam0, iParam1, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
  func_1962(*uParam0, iParam13, 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
  PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, vParam5, fParam8, 1, 0, 0);
  if (iParam14 == 0)
  {
    PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, vParam9, fParam12, 1, 1, 0);
  }
  PED::_0xCF0B19806473D324(*uParam0, vParam2);
}