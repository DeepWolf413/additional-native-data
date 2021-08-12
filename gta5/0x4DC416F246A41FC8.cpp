// am_mp_submarine.ysc @ L449089
int func_6914(var uParam0, var uParam1)
{
  struct<3> Var0;
  
  if (ENTITY::DOES_ENTITY_EXIST(func_6891(PLAYER::PLAYER_ID())))
  {
    func_6905(uParam0, 1);
    uParam0->f_63 = uParam1;
    func_10(PLAYER::PLAYER_ID(), 0, 0, 0);
    Var0 = { ENTITY::GET_ENTITY_COORDS(func_6891(PLAYER::PLAYER_ID()), false) };
    STATS::_0x4DC416F246A41FC8(func_6886(Var0, 0), Var0.x, Var0.f_1, Var0.f_2, uParam0->f_63);
    return 1;
  }
  return 0;
}