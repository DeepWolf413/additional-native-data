// startup.ysc @ L283
bool func_4(var uParam0)
{
  bool bVar0;
  int iVar1;

  bVar0 = true;
  iVar1 = 0;
  while (iVar1 < 11)
  {
    if (func_40(iVar1))
    {
      if (!func_41(iVar1, uParam0[iVar1]))
      {
        bVar0 = false;
      }
    }
    iVar1++;
  }
  if (bVar0)
  {
    SCRIPTS::_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(true);
  }
  return bVar0;
}