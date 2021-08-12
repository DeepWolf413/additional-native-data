// beat_arms_deal.ysc @ L13588
bool func_432(int iParam0)
{
  if (!func_490(iParam0, 0))
  {
    return false;
  }
  if (func_431(1, iParam0))
  {
    return true;
  }
  if (func_616(16, iParam0))
  {
    return true;
  }
  if (func_617(iParam0) >= 4)
  {
    if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 150f, 512) <= 0)
    {
      return true;
    }
  }
  return false;
}