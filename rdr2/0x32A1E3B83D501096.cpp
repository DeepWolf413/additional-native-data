// abigail2_1.ysc @ L38525
int func_940(int iParam0, int iParam1, int iParam2, bool bParam3)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
  {
    return -1;
  }
  iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
  if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
  {
    return -1;
  }
  iVar1 = iParam1;
  iVar1 = iParam1;
  while (iVar1 <= iParam2)
  {
    iVar2 = iVar1;
    if (func_448(iVar2) != 0 && PERSCHAR::_0x800DF3FC913355F3(func_450(iVar2)))
    {
      if (func_450(iVar2) == iVar0)
      {
        return iVar2;
      }
    }
    iVar1++;
  }
  return -1;
}