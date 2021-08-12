// abigail2_1.ysc @ L85670
int func_2584(bool bParam0)
{
  int iVar0;
  int iVar1;
  var uVar2;
  int iVar3;
  int iVar4;

  if (bParam0)
  {
    return func_2600(Global_1359489.f_4);
  }
  PED::GET_GROUP_SIZE(func_2190(), &uVar2, &iVar1);
  if (iVar1 == 0)
  {
    return 0;
  }
  iVar3 = 0;
  while (iVar3 < iVar1)
  {
    iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_2190(), iVar3);
    if (func_2454(iVar4))
    {
      iVar0++;
    }
    iVar3++;
  }
  return iVar0;
}