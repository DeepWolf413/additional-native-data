// finalec2.ysc @ L133168
void func_1033()
{
  struct<3> Var0;
  struct<3> Var3;
  var uVar6;
  struct<3> Var9;
  struct<3> Var12;
  
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_623))
  {
    ENTITY::GET_ENTITY_MATRIX(iLocal_623, &Var3, &Var0, &uVar6, &Var9);
    Var12 = { Var9 + Var0 * Vector(0.165f, 0.165f, 0.165f) + Var3 * Vector(0.169f, 0.169f, 0.169f) };
    GRAPHICS::_DRAW_SPOT_LIGHT_WITH_SHADOW(Var12, Var0, 255, 255, 255, 4f, 0.2f, 20f, 25f, 2.5f, 0);
  }
}