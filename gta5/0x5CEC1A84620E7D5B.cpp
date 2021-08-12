// am_ammo_drop.ysc @ L1607
int func_43()
{
  STREAMING::REQUEST_MODEL(Local_60.f_19.f_1);
  if (STREAMING::HAS_MODEL_LOADED(Local_60.f_19.f_1))
  {
    if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_4))
    {
      if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
      {
        if (func_44(&(Local_60.f_19), Local_60.f_19.f_1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_60.f_4), true) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
        {
          NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_60.f_19, true);
          ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_19), ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_4)));
          ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_4), NETWORK::NET_TO_OBJ(Local_60.f_19), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, false, false, true, false, 2, true);
          OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_60.f_19), true);
          ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(Local_60.f_19), false);
          PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_60.f_19));
          ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_60.f_19), 0f, 0f, -0.2f);
          PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_60.f_19), true);
        }
      }
    }
  }
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_19))
  {
    return 0;
  }
  return 1;
}