// abigail2_1.ysc @ L76707
bool func_2193(var uParam0, int iParam1)
{
  return (uParam0->f_8 && iParam1) != 0;
}

Vector3 func_2194(vector3 vParam0)
{
  float fVar0;
  float fVar1;

  fVar0 = BUILTIN::VMAG(vParam0);
  if (fVar0 != 0f)
  {
    fVar1 = (1f / fVar0);
    vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
  }
  else
  {
    vParam0.x = 0f;
    vParam0.f_1 = 0f;
    vParam0.f_2 = 0f;
  }
  return vParam0;
}