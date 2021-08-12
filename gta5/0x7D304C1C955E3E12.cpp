// act_cinema.ysc @ L1700
void func_33()
{
  struct<3> Var0;
  
  Var0 = { func_34(Local_144.f_1, 60f) };
  TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1000, 0, 2);
}

Vector3 func_34(struct<3> Param0, float fParam3)
{
  struct<3> Var0;
  
  Var0 = { 0f, 1f, 0f };
  func_35(&Var0, CAM::GET_CAM_ROT(Local_144, 2));
  Var0.x = (Var0.x * fParam3);
  Var0.f_1 = (Var0.f_1 * fParam3);
  Var0.f_2 = (Var0.f_2 * fParam3);
  Var0 = { Var0 + Param0 };
  return Var0;
}