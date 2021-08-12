// fm_mission_controller.ysc @ L676029
void func_11175(int iParam0, bool bParam1)
{
  struct<3> Var0;
  struct<3> Var3;
  struct<3> Var6;
  struct<3> Var9;
  struct<3> Var12;
  
  NETWORK::NETWORK_SEED_RANDOM_NUMBER_GENERATOR(1000);
  ENTITY::GET_ENTITY_MATRIX(iParam0, &Var6, &Var3, &Var9, &Var0);
  Var3 = { Var3 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-44f, 44f)) };
  Var6 = { Var6 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f)) };
  Var9 = { Var9 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f)) };
  Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) + Var3 + Var6 + Var9 };
  Var0 = { Var0 - func_10768(iParam0) * Vector(5f, 5f, 5f) };
  FIRE::ADD_EXPLOSION(Var0, 58, 1f, bParam1, false, 1.1f, false);
  Var12 = { Var0 };
  WATER::GET_WATER_HEIGHT(Var12, &(Var12.f_2));
  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xm_submarine");
  GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_xm_submarine_surface_explosion", Var12, 0f, 0f, 0f, 1f, false, false, false, false);
}