// agency_heist3b.ysc @ L138235
void func_1077()
{
  struct<3> Var0;
  float fVar3;
  float fVar4;
  int iVar5;
  struct<3> Var6;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  var uVar13;
  
  Var0 = { 135.8793f, -749.3595f, 261.8527f };
  fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_117(), true), Var0, true);
  fVar4 = 50f;
  iVar5 = 75;
  if (fVar3 <= 500f)
  {
    fVar4 = func_686((fVar4 * SYSTEM::POW((fVar3 / 500f), 2f)), 1.5f, 50f);
  }
  Var6 = { ENTITY::GET_ENTITY_COORDS(func_117(), true) };
  fVar9 = MISC::ABSF((Var6.f_2 - Var0.f_2));
  if (fVar9 <= 25f)
  {
    iVar5 = func_687(SYSTEM::ROUND((IntToFloat(iVar5) * SYSTEM::POW((fVar9 / 25f), 2f))), 0, 75);
  }
  HUD::GET_HUD_COLOUR(12, &iVar10, &iVar11, &iVar12, &uVar13);
  if (iVar5 != 0)
  {
    GRAPHICS::DRAW_MARKER(1, Var0, 0f, 0f, 0f, 0f, 0f, 0f, 25f, 25f, fVar4, iVar10, iVar11, iVar12, iVar5, false, false, 2, false, 0, 0, false);
  }
}