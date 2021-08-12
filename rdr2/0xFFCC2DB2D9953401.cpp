// abigail2_1.ysc @ L70201
int func_1982(int iParam0, int iParam1, int iParam2, bool bParam3)
{
  int iVar0;

  if (iParam2 == 0)
  {
    return -1;
  }
  iVar0 = 0;
  while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
  {
    if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
    {
      return iVar0;
    }
    iVar0++;
  }
  return -1;
}