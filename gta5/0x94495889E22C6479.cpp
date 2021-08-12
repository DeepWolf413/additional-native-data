// am_pi_menu.ysc @ L368459
int func_5351()
{
  int iVar0;
  
  if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
  {
    return 1;
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
    {
      return func_5352(ENTITY::GET_ENTITY_MODEL(iVar0));
    }
  }
  return 0;
}