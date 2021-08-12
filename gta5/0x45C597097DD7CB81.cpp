// gb_casino.ysc @ L415647
void func_7487()
{
  struct<3> Var0;
  struct<3> Var3;
  
  if (func_8270(107))
  {
    return;
  }
  if (func_7488(&Var0, &Var3))
  {
    TASK::ADD_COVER_BLOCKING_AREA(Var0, Var3, false, false, false, false);
    func_8271(107);
  }
}