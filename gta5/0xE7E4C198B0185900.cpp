// gb_gunrunning.ysc @ L99589
void func_2037(bool bParam0)
{
  int iVar0;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1215.f_679[bParam0]))
  {
    iVar0 = NETWORK::NET_TO_OBJ(Local_1215.f_679[bParam0]);
    if ((ENTITY::GET_ENTITY_HEALTH(iVar0) <= (ENTITY::GET_ENTITY_MAX_HEALTH(iVar0) / 4) && !MISC::IS_BIT_SET(Local_1215.f_578, bParam0)) && !MISC::IS_BIT_SET(Local_2083[NETWORK::PARTICIPANT_ID_TO_INT() /*129*/].f_113, bParam0))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && func_2038(iVar0)))
      {
        MISC::SET_BIT(&(Local_2083[NETWORK::PARTICIPANT_ID_TO_INT() /*129*/].f_113), bParam0);
        ENTITY::SET_ENTITY_PROOFS(iVar0, false, false, false, false, false, false, false, false);
        ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
        ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
        ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
        FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iVar0, true), 6, 1.5f, true, false, 1f, false);
        OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iVar0, 0, true);
      }
    }
  }
}