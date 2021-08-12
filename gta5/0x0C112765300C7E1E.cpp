// business_battles_defend.ysc @ L22048
void func_426(int iParam0)
{
  switch (Local_143.f_3)
  {
    case 4:
      ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0]), false, false);
      ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0]), true, false);
      ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0]), true);
      if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0])) && PHYSICS::_GET_HAS_OBJECT_FRAG_INST(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0])))
      {
        PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0]), true);
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0]), true);
      }
      ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_143.f_590[iParam0]), true, true, true, true, true, true, true, true);
      break;
  }
}