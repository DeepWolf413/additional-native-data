// agency_heist3a.ysc @ L124837
void func_916()
{
  struct<3> Var0;
  
  if (func_915(PLAYER::PLAYER_PED_ID(), 152.8867f, -733.0175f, 249.2381f, "v_fib03"))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
    if (Var0.f_2 < 253.0016f)
    {
      HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FIB03"), 135.332f, -746.367f, 250, 4);
    }
  }
}