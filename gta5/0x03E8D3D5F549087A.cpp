// am_ammo_drop.ysc @ L1536
void func_40(int iParam0, int iParam1)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  var uVar10;
  float fVar11;
  float fVar12;
  
  HUD::GET_HUD_COLOUR(iParam1, &iVar7, &iVar8, &iVar9, &uVar10);
  fVar6 = 0.5f;
  MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(iParam0)), &Var0, &Var3);
  fVar11 = ((Var3.f_2 - Var0.f_2) / 2f);
  fVar12 = (Var3.f_2 - fVar11);
  if (fVar6 <= (fVar12 + 0.1f))
  {
    fVar6 = (fVar12 + 0.4f);
  }
  GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(iParam0), true) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar7, iVar8, iVar9, 100, true, true, 2, false, 0, 0, false);
}