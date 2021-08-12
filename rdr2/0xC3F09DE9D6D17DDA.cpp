// abigail2_1.ysc @ L70071
int func_1977(int iParam0)
{
  int iVar0;
  struct<11> Var1;
  int iVar95;

  Var1.f_10 = 10;
  iVar95 = 0;
  while (iVar95 < 3)
  {
    if (!func_2287(&iVar0, 0, iVar95, &Var1) && !func_2287(&iVar0, 1, iVar95, &Var1))
    {
    }
    else if (STREAMING::IS_MODEL_A_PED(Var1))
    {
      func_2288(iVar0, &Var1);
      if (func_571(Var1.f_1, 0))
      {
        return 1;
      }
    }
    iVar95++;
  }
  return 0;
}