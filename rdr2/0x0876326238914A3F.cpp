// bjack_sp.ysc @ L9161
void func_290(var uParam0)
{
  struct<72> Var0;
  int iVar72;

  Var0.f_10 = 6;
  if (!MINIGAME::_0x580F34C726387226(&Var0, 72))
  {
    return;
  }
  MINIGAME::_0x0876326238914A3F();
  uParam0->f_1 = { Var0.f_1 };
  uParam0->f_9 = Var0.f_9;
  *uParam0 = 1;
  iVar72 = 0;
  while (iVar72 < Var0.f_71)
  {
    func_765(uParam0, Var0.f_10[iVar72 /*10*/], Var0.f_10[iVar72 /*10*/].f_8);
    iVar72++;
  }
}