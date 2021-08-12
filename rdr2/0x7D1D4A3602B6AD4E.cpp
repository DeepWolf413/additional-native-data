// aberdeenpigfarm.ysc @ L4958
void func_214(int iParam0, bool bParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (!func_253(iParam0))
  {
    return;
  }
  iVar0 = iParam0;
  iVar1 = (iVar0 / 32);
  iVar2 = (iVar0 % 32);
  if (bParam1)
  {
    MISC::SET_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
  }
  else
  {
    MISC::CLEAR_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
  }
}