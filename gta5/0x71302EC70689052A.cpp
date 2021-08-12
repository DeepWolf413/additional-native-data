// am_casino_peds.ysc @ L257405
void func_3239(bool bParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  
  if (func_15(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if (func_3114(PLAYER::PLAYER_PED_ID(), iVar0) != -1 || !bParam0)
      {
        if (bParam2)
        {
          if (!NETWORK::_NETWORK_IS_ENTITY_CONCEALED(iVar0))
          {
            NETWORK::_NETWORK_CONCEAL_ENTITY(iVar0, bParam2);
          }
        }
        else if (NETWORK::_NETWORK_IS_ENTITY_CONCEALED(iVar0))
        {
          NETWORK::_NETWORK_CONCEAL_ENTITY(iVar0, bParam2);
        }
      }
      if (bParam1)
      {
        PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
      }
    }
  }
}