// property_use_core.ysc @ L15829
int func_592(var uParam0, int iParam1, bool bParam2)
{
  if (!DATABINDING::_VIRTUAL_COLLECTION_EXISTS(func_288()))
  {
    return 0;
  }
  DATABINDING::_VIRTUAL_COLLECTION_RESET(func_288());
  if (iParam1 >= 0)
  {
    uParam0->f_2031.f_102 = iParam1;
  }
  if (bParam2)
  {
    func_470(uParam0);
  }
  return 1;
}