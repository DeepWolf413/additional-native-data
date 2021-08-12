// maintransition.ysc @ L258645
void func_3214(bool bParam0)
{
  struct<3> Var0;
  
  Var0 = { func_3215(16, -1) };
  if (bParam0)
  {
    func_3213(&Var0, 500f);
  }
  func_3302(Var0, func_82(108, -1), 1120403456, 1, 0, 0, 1, 1115815936, 1, 0, 0, 1, -1082130432);
}

Vector3 func_3215(int iParam0, int iParam1)
{
  int iVar0;
  struct<3> Var1;
  
  iVar0 = Global_2594286[iParam0 /*3*/][func_52(iParam1)];
  if (STATS::STAT_GET_POS(iVar0, &Var1, &(Var1.f_1), &(Var1.f_2), -1))
  {
    return Var1;
  }
  return 0f, 0f, 0f;
}