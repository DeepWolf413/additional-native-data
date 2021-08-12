// short_update.ysc @ L8070
void func_229(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  struct<10> Var3;
  struct<18> Var17;

  Global_1935496.f_16 = iParam0;
  Var3.f_9 = -1591664384;
  if (func_904("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
  {
    Var17.f_3 = -1;
    Var17.f_12 = 4;
    Var17.f_17 = 4;
    iVar2 = 0;
    while (iVar2 < iVar1)
    {
      if (!func_905(&Var3, iVar2, iVar0, iVar1))
      {
      }
      else if (!func_710(Var3.f_4))
      {
      }
      else if (INVENTORY::_0x0C093C1787F18519(Var3.f_4, &Var17) && !func_906(Var3.f_4, 1194584906))
      {
        INVENTORY::_0x227522FD59DDB7E8(func_221(0), &Var3, iParam0);
      }
      iVar2++;
    }
    func_907(iVar0);
  }
}