// act_hunting_2.ysc @ L21306
bool func_582(int iParam0, int iParam1)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    return false;
  }
  if (PED::_GET_CARRIER_AS_PED(iParam1) != iParam0)
  {
    return false;
  }
  iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
  if (iVar0 == 5)
  {
    return true;
  }
  if (iVar0 == 7)
  {
    return true;
  }
  return false;
}