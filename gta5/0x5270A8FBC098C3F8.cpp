// bailbond1.ysc @ L37327
int func_317(var uParam0)
{
  struct<3> Var0;
  
  if (func_24(*uParam0))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false) };
    if (!func_318(uParam0))
    {
      if (MISC::IS_PROJECTILE_IN_AREA(Var0 - Vector(7f, 7f, 7f), Var0 + Vector(7f, 7f, 7f), false))
      {
        return 1;
      }
    }
  }
  return 0;
}