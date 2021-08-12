// abigail2_1.ysc @ L53311
bool func_1385(int iParam0, bool bParam1)
{
  int iVar0;
  var uVar1;
  char cVar9[64];

  iVar0 = 1;
  MemCopy(&uVar1, {func_261(iParam0)}, 8);
  StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
  {
    if (!func_1860(iParam0))
    {
      iVar0 = 0;
    }
  }
  if (!bParam1)
  {
    MemCopy(&uVar1, {func_262(iParam0)}, 8);
    StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
    if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
    {
      if (!func_1861(iParam0))
      {
        iVar0 = 0;
      }
    }
  }
  return iVar0;
}