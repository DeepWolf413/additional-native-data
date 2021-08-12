// business_battles.ysc @ L100165
int func_670()
{
  struct<3> Var0;
  
  if (!func_71(33))
  {
    Var0 = { func_674() };
    if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uLocal_2409.f_1142))
    {
      STREAMING::REQUEST_MODEL(func_673());
      if (STREAMING::HAS_MODEL_LOADED(func_673()))
      {
        if (NETWORK::_CAN_REGISTER_MISSION_PICKUPS(1))
        {
          uLocal_2409.f_1142 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_672(), Var0, false, func_673()));
          NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(uLocal_2409.f_1142, true);
          NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(uLocal_2409.f_1142), true);
          ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(uLocal_2409.f_1142), true);
          if (!func_474(func_671()))
          {
            ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(uLocal_2409.f_1142), func_671(), 0, true);
          }
        }
      }
    }
    if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uLocal_2409.f_1142))
    {
      func_76(33);
      return 1;
    }
  }
  return 0;
}