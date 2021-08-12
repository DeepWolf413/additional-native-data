// law_office_asb.ysc @ L5438
bool func_179(int iParam0)
{
  var uVar0;

  if (ENTITY::_0x61914209C36EFDDB(iParam0) == 3 && !ENTITY::_0x383F64263F946E45(&uVar0, iParam0, 4, Global_35, 0, 1))
  {
    if (!FIRE::IS_ENTITY_ON_FIRE(iParam0) && !PED::IS_PED_ON_MOUNT(Global_35))
    {
      return true;
    }
  }
  return false;
}