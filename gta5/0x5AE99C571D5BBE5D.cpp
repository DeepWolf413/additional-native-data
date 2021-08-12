// act_cinema.ysc @ L79143
void func_416(int iParam0)
{
  struct<3> Var0;
  
  Var0.f_2 = -1;
  Var0.x = 690534430;
  Var0.f_1 = PLAYER::PLAYER_ID();
  Var0.f_2 = iParam0;
  SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, func_417(1, 1));
}