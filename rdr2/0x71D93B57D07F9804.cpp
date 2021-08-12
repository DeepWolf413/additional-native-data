// act_fishing03.ysc @ L21017
float func_589(var uParam0)
{
  if (!func_204(uParam0))
  {
    return 0f;
  }
  if (func_503(uParam0))
  {
    return uParam0->f_2;
  }
  return (func_504() - uParam0->f_1);
}

Vector3 func_590(float fParam0)
{
  return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

Vector3 func_591(vector3 vParam0)
{
  vector3 vVar0;
  float fVar3;
  float fVar4;

  vVar0 = { func_904(vParam0) };
  fVar3 = MISC::ATAN2(vVar0.y, vVar0.x);
  fVar4 = -MISC::ATAN2(vVar0.z, BUILTIN::SQRT(((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y))));
  return 0f, fVar4, fVar3;
}