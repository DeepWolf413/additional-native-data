// fm_mission_controller.ysc @ L594462
void func_9847()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3286, false) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_3286, false)))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_3286, false);
    if (PLAYER::GET_PLAYER_INVINCIBLE(bLocal_3284))
    {
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3286, false);
    }
    ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
    NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, -1);
  }
}