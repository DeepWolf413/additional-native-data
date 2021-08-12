// am_mp_defunct_base.ysc @ L385509
void func_6347()
{
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(func_943(2)))
    {
      if (!NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(func_943(2)) && NETWORK::NETWORK_IS_DOOR_NETWORKED(func_943(2)))
      {
        NETWORK::NETWORK_REQUEST_CONTROL_OF_DOOR(func_943(2));
      }
      if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(func_943(2)))
      {
        OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(func_943(2), 0, false, true);
        OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(func_943(2), 0f, false, true);
        OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(func_943(2), 30f, false, true);
        OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(func_943(2), 8.5f, false, true);
      }
    }
  }
}