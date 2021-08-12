// achievement_controller.ysc @ L7609
int func_29()
{
  struct<7> Var0;
  struct<7> Var7;
  
  CLOCK::GET_POSIX_TIME(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
  Var7 = { func_53(joaat("mpply_started_mp")) };
  if (func_30(Var7, Var0, 7))
  {
    return 1;
  }
  return 0;
}