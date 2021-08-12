// abigail2_1.ysc @ L69535
int func_1954()
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = 0;
  while (iVar0 < 9)
  {
    iVar2 = func_2271(iVar0);
    if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
    {
      iVar1++;
    }
    iVar0++;
  }
  return iVar1;
}