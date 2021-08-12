// am_mp_property_ext.ysc @ L264715
int func_4316()
{
  int iVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      if (!func_4305(ENTITY::GET_ENTITY_MODEL(iVar0)))
      {
        return 0;
      }
      if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) || VEHICLE::IS_HELI_PART_BROKEN(iVar0, true, true, true))
      {
        return 0;
      }
      if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
      {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}