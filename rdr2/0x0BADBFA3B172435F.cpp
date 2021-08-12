// aberdeenpigfarm.ysc @ L5830
bool func_263(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
  vector3 vVar0;
  struct<2> Var3;
  float fVar6;

  vVar0 = { vParam0 - vParam3 };
  Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
  Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
  fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
  return fVar6 <= 1f;
}