// camp_beaverhollow.ysc @ L12182
int func_393(int iParam0)
{
  int iVar0;
  vector3 vVar1;

  iVar0 = func_268();
  if (iParam0 != iVar0)
  {
    return 1;
  }
  vVar1 = { func_842(iParam0, 1) };
  if (func_212(vVar1))
  {
    return 0;
  }
  STREAMING::_0xA8432A14D4DC2101(vVar1);
  if (STREAMING::_HAS_COLLISION_LOADED_AT_COORD(vVar1))
  {
    return 1;
  }
  return 0;
}