// golf.ysc @ L121106
void func_1233(var uParam0, var uParam1, var uParam2)
{
  float fVar0;
  struct<3> Var1;
  struct<3> Var4;
  struct<3> Var7;
  float fVar10;
  
  fVar0 = (func_1443(func_1202(uParam1), func_539(uParam0, func_531(uParam1))) + 90f);
  Var1 = { func_1202(uParam1) };
  Var4 = { func_563(SYSTEM::COS(fVar0), SYSTEM::SIN(fVar0), 0f) };
  Var7 = { Vector(50f, 50f, 50f) * Var4 };
  GRAPHICS::DRAW_DEBUG_SPHERE(Var1, 0.25f, 255, 0, 0, 255);
  GRAPHICS::DRAW_DEBUG_SPHERE(Var1 + Var7, 0.25f, 255, 255, 255, 255);
  GRAPHICS::DRAW_DEBUG_LINE(Var1, Var1 + Var7, 0, 255, 0, 255);
  if (STREAMING::STREAMVOL_IS_VALID(uParam2->f_721))
  {
    STREAMING::STREAMVOL_DELETE(uParam2->f_721);
  }
  if (!STREAMING::STREAMVOL_IS_VALID(uParam2->f_721))
  {
    if (func_1234(uParam2))
    {
      PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uParam2->f_578);
    }
    fVar10 = 75f;
    uParam2->f_578 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Var1 + Var7, 2f, 100f, 10f, func_580((fVar0 - 90f)), false, 7);
    uParam2->f_721 = STREAMING::STREAMVOL_CREATE_FRUSTUM(Var1, Var4, fVar10, 13, 127);
  }
}