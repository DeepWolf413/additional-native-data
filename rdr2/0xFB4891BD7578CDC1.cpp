// abigail2_1.ysc @ L53496
bool func_1394(int iParam0, int iParam1, bool bParam2)
{
  if (!bParam2)
  {
    if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
    {
      return false;
    }
  }
  return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}