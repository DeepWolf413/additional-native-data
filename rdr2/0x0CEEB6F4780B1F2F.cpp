// bounty1.ysc @ L73197
int func_2167(int iParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return iParam2;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
  {
  }
  iVar1 = iParam1;
  iVar0 = 2;
  while (iVar0 >= 0)
  {
    if (PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0) == iVar1)
    {
      PED::_0x627F7F3A0C4C51FF(iParam0, iVar1);
      iParam2 = (iParam2 - 1);
    }
    if (iParam2 <= 0)
    {
    }
    else
    {
      iVar0 = (iVar0 + -1);
    }
  }
  return iParam2;
}