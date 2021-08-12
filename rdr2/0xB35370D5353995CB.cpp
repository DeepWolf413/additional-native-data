// doc_book.ysc @ L541
void func_13(var uParam0, var uParam1)
{
  int iVar0;

  iVar0 = (*uParam1)[0 /*9*/];
  if (*uParam0 == 0 && iVar0 == 0)
  {
    iVar0 = Global_1911772;
  }
  if (iVar0 != 0)
  {
    if (func_46(iVar0) != 0)
    {
      TASK::_0xB35370D5353995CB(Global_35, func_46(iVar0), 1048576000 /* Float: 0.25f */);
    }
    if (((uParam0->f_142 && func_34(iVar0)) && !func_61(iVar0, 1, 0)) && !uParam0->f_149)
    {
      func_35(iVar0, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
      uParam0->f_149 = 1;
    }
  }
}