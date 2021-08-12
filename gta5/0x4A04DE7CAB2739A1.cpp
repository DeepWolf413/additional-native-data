// fm_deathmatch_controler.ysc @ L274847
void func_3885(bool bParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (func_3886(ENTITY::GET_ENTITY_MODEL(iVar0)))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || !bParam0)
      {
        AUDIO::SET_VEHICLE_BOOST_ACTIVE(iVar0, false);
      }
    }
  }
  Global_1312337 = 0;
}