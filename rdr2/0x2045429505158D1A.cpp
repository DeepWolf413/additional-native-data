// rcm_gunslinger5_1.ysc @ L61438
bool func_2129(int iParam0, int iParam1)
{
  if (ENTITY::IS_ENTITY_DEAD(iLocal_922[0]) || VEHICLE::_0x2045429505158D1A(iLocal_922[0]))
  {
    func_418(&iLocal_917, 16);
    func_1501(iParam0, iParam1, 1);
    return true;
  }
  return false;
}