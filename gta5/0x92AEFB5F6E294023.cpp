// am_dead_drop.ysc @ L4894
void func_136()
{
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_84.f_2))
  {
    if ((MISC::IS_BIT_SET(Local_84.f_1, 5) || MISC::IS_BIT_SET(Local_84.f_1, 2)) || MISC::IS_BIT_SET(Local_84.f_1, 6))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_84.f_2))
      {
        if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_84.f_2)))
        {
          ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_84.f_2), true, true);
        }
        ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_84.f_2), false, false);
        OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_84.f_2), true, false);
      }
    }
  }
}