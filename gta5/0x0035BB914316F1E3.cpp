// appbikerbusiness.ysc @ L12228
void func_246(int iParam0, int iParam1)
{
  int iVar0;
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar0 = Global_1371980[func_460(iParam0)];
  fVar1 = (SYSTEM::TO_FLOAT((100 - iVar0)) / 20f);
  iVar2 = SYSTEM::CEIL(fVar1);
  iVar3 = func_13(0, iVar0, 0);
  iVar4 = MISC::GET_HASH_KEY(func_235(iParam0));
  iVar5 = func_27(iParam0);
  if (iParam1 != -1 && iParam1 > 0)
  {
    iVar3 = iParam1;
  }
  if (func_25())
  {
    func_247(268924934, iVar3, &iVar6, 0, 1, 0);
    Global_4265506[iVar6 /*85*/] = iVar4;
    Global_4265506[iVar6 /*85*/].f_1 = iVar5;
    Global_4265506[iVar6 /*85*/].f_9 = iVar2;
  }
  else
  {
    MONEY::_NETWORK_SPENT_BUSINESS(iVar3, iVar4, iVar5, iVar2);
  }
}