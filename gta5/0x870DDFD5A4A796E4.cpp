// am_mp_defunct_base.ysc @ L385490
void func_6345(int iParam0)
{
  if (func_943(iParam0) != 0)
  {
    if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(func_943(iParam0)))
    {
      OBJECT::ADD_DOOR_TO_SYSTEM(func_943(iParam0), func_957(iParam0), func_956(iParam0), false, false, false);
      NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(func_943(iParam0));
    }
  }
}