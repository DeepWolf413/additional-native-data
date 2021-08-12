// abigail2_1.ysc @ L72849
bool func_2103(int iParam0, var uParam1)
{
  int iVar0;
  int iVar1;

  if (uParam1->f_1 == 0)
  {
    return false;
  }
  if (!func_2102(uParam1, 2))
  {
    iVar1 = PED::_GET_METAPED_TYPE(iParam0);
    iVar0 = 0;
    while (iVar0 < 39)
    {
      if (uParam1->f_1.f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
      {
      }
      else
      {
        uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, uParam1->f_1.f_1[iVar0 /*3*/], 0, false, 0);
        uParam1->f_135[uParam1->f_134 /*2*/].f_1 = iVar0;
        uParam1->f_134++;
      }
      iVar0++;
    }
    func_2105(uParam1, 2);
  }
  return func_2337(iParam0, uParam1);
}