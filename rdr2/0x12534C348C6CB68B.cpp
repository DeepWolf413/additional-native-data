// abigail2_1.ysc @ L25571
int func_439(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
  if (iParam1 == 0)
  {
    iParam1 = -1;
  }
  if (!bParam2)
  {
    if (PED::IS_PED_A_PLAYER(iParam0))
    {
      func_681(14, iParam1, 0, 0, 0);
    }
    else
    {
      func_681(14, iParam1, 1, iParam0, 0);
    }
    return 1;
  }
  if (!func_168(0))
  {
  }
  func_787(&(Global_1946804.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
  return 1;
}