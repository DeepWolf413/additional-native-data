// am_mp_armory_aircraft.ysc @ L309159
void func_5046()
{
  int iVar0;
  
  if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && Global_1683964 != 7) && !func_2827()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
    if (func_499(PLAYER::PLAYER_PED_ID(), 0) == -1)
    {
      if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("avenger")))
      {
        ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
        ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
        if (!func_3020())
        {
          ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
        }
        VEHICLE::SET_VEHICLE_LIGHTS(iVar0, 0);
        VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, false);
        VEHICLE::_0xDBC631F109350B8C(iVar0, false);
        VEHICLE::SET_VEHICLE_IS_STOLEN(iVar0, false);
        VEHICLE::_0xAB04325045427AAE(iVar0, false);
        VEHICLE::_0x2311DD7159F00582(iVar0, false);
        ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
        ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
        VEHICLE::_SET_CAMBERED_WHEELS_DISABLED(iVar0, 1);
        NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar0, false);
      }
    }
  }
}