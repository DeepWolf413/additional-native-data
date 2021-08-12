// am_dead_drop.ysc @ L124196
void func_1423()
{
  if (func_150())
  {
    if (Local_2021[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 != 4)
    {
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_84.f_2))
      {
        if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_84.f_2), PLAYER::PLAYER_PED_ID()))
        {
          if (MISC::IS_BIT_SET(Local_2021[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1, true))
          {
            MISC::CLEAR_BIT(&(Local_2021[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1), true);
          }
          OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_84.f_2), true, true);
          OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_84.f_2));
        }
      }
      func_1296();
      Local_2021[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 4;
    }
  }
}