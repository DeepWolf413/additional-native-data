// player_camp.ysc @ L30697
int func_1001(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  func_1325(uParam0);
  if (iParam1 == -1)
  {
    return 0;
  }
  iVar0 = func_996(iParam1);
  if (iVar0 == 0)
  {
    return 0;
  }
  iVar1 = 0;
  iVar1 = STREAMING::_0xD6E39DC5D46DF4AB(iVar0);
  if (iVar1 <= 0)
  {
    return 0;
  }
  *uParam0 = iParam1;
  uParam0->f_1 = iVar0;
  uParam0->f_2 = iVar1;
  return 1;
}