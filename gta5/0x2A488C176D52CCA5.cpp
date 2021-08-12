// abigail2.ysc @ L36442
bool func_288(int iParam0, int iParam1, float fParam2)
{
  struct<3> Var0;
  struct<3> Var3;
  
  Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
  Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true) };
  return (((Var0.x * Var3.x) + (Var0.f_1 * Var3.f_1)) / SYSTEM::VDIST(Var3, 0f, 0f, 0f)) > SYSTEM::COS(fParam2);
}