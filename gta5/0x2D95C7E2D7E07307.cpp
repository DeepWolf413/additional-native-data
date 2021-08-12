// am_mp_property_int.ysc @ L307025
void func_3474()
{
  int iVar0;
  
  if (MISC::IS_BIT_SET(Local_4080.f_8, 11) || MISC::IS_BIT_SET(Global_1590554.f_22, 11))
  {
    if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
      if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
      {
        ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
        ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
      }
    }
    else
    {
      ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
      NETWORK::NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(0);
    }
    MISC::CLEAR_BIT(&(Local_4080.f_8), 11);
    MISC::CLEAR_BIT(&(Local_4080.f_8), 25);
    MISC::CLEAR_BIT(&(Global_1590554.f_22), 11);
    MISC::CLEAR_BIT(&(Global_1590554.f_22), 25);
  }
}