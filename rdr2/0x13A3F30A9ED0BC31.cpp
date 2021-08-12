// abigail2_1.ysc @ L35330
bool func_822(var uParam0)
{
  if (func_845(*uParam0, 2))
  {
    return true;
  }
  if (!func_845(*uParam0, 1))
  {
    func_1314(uParam0);
  }
  if (STREAMING::HAS_PTFX_ASSET_LOADED())
  {
    func_811(uParam0, 2);
    return true;
  }
  return false;
}