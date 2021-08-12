// abigail2_1.ysc @ L66504
void func_1834(int iParam0)
{
  int iVar0;

  if (func_20() != -1)
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < 27)
  {
    if (func_989(func_456(iVar0), 0))
    {
      if (PED::IS_PED_GROUP_MEMBER(func_456(iVar0), func_2190(), 1))
      {
        func_2191(iVar0, iParam0);
      }
    }
    iVar0++;
  }
}