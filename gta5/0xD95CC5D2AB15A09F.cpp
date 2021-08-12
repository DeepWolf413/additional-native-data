// business_battles.ysc @ L209980
void func_3145(int iParam0)
{
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2409[iParam0]))
  {
    if (func_3(iParam0, 9))
    {
      if (!ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(uLocal_2409[iParam0])))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uLocal_2409[iParam0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uLocal_2409[iParam0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
        {
          if (func_1220(uLocal_2409[iParam0]))
          {
            ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uLocal_2409[iParam0]), false);
          }
        }
      }
    }
    else if (ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(uLocal_2409[iParam0])))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uLocal_2409[iParam0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(uLocal_2409[iParam0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
      {
        if (func_1220(uLocal_2409[iParam0]))
        {
          ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(uLocal_2409[iParam0]), true);
        }
      }
    }
  }
}