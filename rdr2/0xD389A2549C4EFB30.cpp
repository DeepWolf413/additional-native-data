// abigail2_1.ysc @ L31441
int func_655(int iParam0, int iParam1)
{
  int iVar0;

  if (iParam1 < 0)
  {
    return 0;
  }
  if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
  {
    return 0;
  }
  iVar0 = 0;
  if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
  {
    return 0;
  }
  return iVar0;
}