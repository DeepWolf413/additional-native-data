// gb_airfreight.ysc @ L29443
void func_732()
{
  int iVar0;
  int iVar1;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
    if (func_733(iVar1))
    {
      if (iVar0 != func_31())
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
        {
          VEHICLE::_0x1F34B0626C594380(iVar0, func_944());
        }
      }
    }
  }
}