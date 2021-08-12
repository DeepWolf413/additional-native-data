// shoprobberies.ysc @ L14399
bool func_522(int* iParam0)
{
  bool bVar0;

  if (ENTITY::IS_ENTITY_DEAD(*iParam0))
  {
    return false;
  }
  if (func_221(128))
  {
    bVar0 = true;
  }
  if (LAW::_0x7351DA734F989F4E(*iParam0))
  {
    bVar0 = true;
  }
  if (func_542(&(iParam0->f_9), 2048))
  {
    bVar0 = true;
  }
  if (bVar0)
  {
    func_532("SVD_DEP_KNOCK", 0);
    func_130();
    func_223(iParam0, 0);
    return true;
  }
  return false;
}