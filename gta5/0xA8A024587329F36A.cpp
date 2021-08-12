// am_mp_property_int.ysc @ L179587
int func_1699()
{
  if (func_151(joaat("ex_prop_tv_settop_remote")))
  {
    if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iLocal_11901))
    {
      if (func_171(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
      {
        NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
        if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 1, 0))
        {
          iLocal_11901 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("ex_prop_tv_settop_remote"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false));
          ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_ENT(iLocal_11901), false, false);
          NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(iLocal_11901), true);
          ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(iLocal_11901), false, false);
          NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(iLocal_11901, PLAYER::PLAYER_ID(), true);
          return 1;
        }
      }
    }
    else
    {
      return 1;
    }
  }
  return 0;
}