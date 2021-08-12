// aberdeenpigfarm.ysc @ L2578
int func_98(int iParam0, bool bParam1, bool bParam2)
{
  if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
  {
    if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
    {
      OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
    }
    else
    {
      OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
    }
  }
  else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
  {
    if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
    {
      OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
    }
  }
  if (bParam2)
  {
    OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
  }
  return iParam0;
}