// abigail2_1.ysc @ L30981
int func_641()
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
  if (iVar0 == func_1042())
  {
    return func_642();
  }
  iVar4 = (func_1042() - iVar0);
  iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
  iVar2 = 0;
  while (iVar2 < func_1042())
  {
    iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
    if (!func_1119(iVar1))
    {
      if (iVar5 == iVar3)
      {
        return func_1043(iVar1);
      }
      iVar3++;
    }
    iVar2++;
  }
  return 0;
}