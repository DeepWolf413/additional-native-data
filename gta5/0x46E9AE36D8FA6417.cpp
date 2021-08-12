// act_cinema.ysc @ L2822
void func_61()
{
  struct<28> Var0;
  
  if (SCRIPT::IS_THREAD_ACTIVE(Global_2413982.f_6))
  {
    if (!Global_2413982.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
    {
      return;
    }
  }
  Var0.f_7 = 1;
  Var0.f_8 = 1;
  Var0.f_21 = 1115815936;
  Var0.f_27 = -1082130432;
  Global_2413982 = { Var0 };
  Global_2413982.f_6 = -1;
}