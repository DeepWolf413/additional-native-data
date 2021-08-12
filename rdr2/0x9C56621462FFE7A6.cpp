// fishing_core.ysc @ L21910
void func_813(var uParam0, int iParam1)
{
  if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((uParam0[iParam1 /*263*/])->f_25))
  {
    return;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(Global_1900073.f_26[iParam1 /*30*/].f_7))
  {
    return;
  }
  (uParam0[iParam1 /*263*/])->f_26 = 0f;
  func_104(&((uParam0[iParam1 /*263*/])->f_27));
  if (Global_1900073.f_154[iParam1] == 1)
  {
    (uParam0[iParam1 /*263*/])->f_25 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_mg_fishing_drips", Global_1900073.f_26[iParam1 /*30*/].f_7, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_1900073.f_26[iParam1 /*30*/].f_7, "SKEL_Tail5"), 1065353216 /* Float: 1f */, 0, 0, 0);
  }
  else
  {
    (uParam0[iParam1 /*263*/])->f_25 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mg_fishing_drips", Global_1900073.f_26[iParam1 /*30*/].f_7, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
  }
  GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION((uParam0[iParam1 /*263*/])->f_25, "fade", (uParam0[iParam1 /*263*/])->f_26, false);
}