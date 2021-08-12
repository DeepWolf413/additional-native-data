// abigail2.ysc @ L36357
int func_282(int iParam0, int iParam1, float fParam2, int iParam3)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  
  Var0 = { func_284(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
  if (fParam2 < 0.1f || fParam2 > 360f)
  {
    return 1;
  }
  if (iParam3 == 0)
  {
    Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
  }
  else
  {
    Var3 = { func_284(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
  }
  fVar6 = func_283(Var3, Var0);
  if (fVar6 <= SYSTEM::COS((fParam2 / 2f)))
  {
    return 0;
  }
  return 1;
}