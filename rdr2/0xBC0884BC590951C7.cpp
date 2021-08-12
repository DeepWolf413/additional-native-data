// abigail2_1.ysc @ L62786
int func_1670(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
  int iVar0;
  int iVar1;

  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    return 0;
  }
  if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
  {
    return 0;
  }
  iVar0 = 0;
  while (iVar0 < 48)
  {
    if (func_966(iVar0, 2))
    {
    }
    else if (iVar1 == 0)
    {
      iVar1 = iVar0;
    }
    iVar0++;
  }
  if (iVar1 != 0)
  {
    func_2072(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
    return iVar1;
  }
  return 0;
}