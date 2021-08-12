// bounty1.ysc @ L65120
bool func_1768()
{
  int iVar0;

  if (func_424(Global_35, 0) && func_424(iLocal_111, 0))
  {
    if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
    {
      if (ENTITY::_0x61914209C36EFDDB(iLocal_111) == 7)
      {
        iVar0 = PED::_GET_CARRIER_AS_MOUNT(iLocal_111);
        if (PED::GET_MOUNT(Global_35) == iVar0)
        {
          return true;
        }
      }
    }
  }
  return false;
}