// am_imp_exp.ysc @ L18718
void func_513(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
  iVar0 = 0;
  while (iVar0 < 5)
  {
    (*uParam0)[iVar0] = -1;
    uParam0->f_6[iVar0] = 0;
    iVar0++;
  }
  iVar0 = 0;
  while (iVar0 < 5)
  {
    if (iVar0 < iParam1)
    {
      (*uParam0)[iVar0] = func_500(iVar1, iVar0);
      uParam0->f_6[iVar0] = 0;
    }
    else
    {
      (*uParam0)[iVar0] = -1;
      uParam0->f_6[iVar0] = 1;
    }
    iVar0++;
  }
  Global_2097152[func_508() /*5557*/].f_675.f_37 = iVar1;
}