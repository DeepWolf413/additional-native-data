// business_battles_sell.ysc @ L346212
void func_5679()
{
  int iVar0;
  struct<3> Var1;
  struct<3> Var4;
  
  if (!func_111(24))
  {
    iVar0 = 0;
    while (iVar0 < 3)
    {
      Var1 = { func_5681(iVar0) };
      Var4 = { func_5680(iVar0) };
      if (!func_334(Var1))
      {
        if (!PED::_DOES_SCENARIO_BLOCKING_AREA_EXIST(Var1 - Var4, Var1 + Var4))
        {
          iLocal_5291[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(Var1 - Var4, Var1 + Var4, false, true, true, true);
          MISC::SET_BIT(&iLocal_5295, iVar0);
        }
      }
      bVar0++;
    }
    func_6621(24);
  }
}