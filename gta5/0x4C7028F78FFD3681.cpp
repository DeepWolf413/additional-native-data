// am_kill_list.ysc @ L27356
void func_691(bool bParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
      VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
    }
  }
}