// agency_heist3a.ysc @ L120712
void func_828()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_204))
  {
    if (ENTITY::IS_ENTITY_DEAD(Local_82, false))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_204, false))
      {
        if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_204))
        {
          ENTITY::SET_ENTITY_PROOFS(Local_204, false, false, false, false, false, false, false, false);
        }
      }
    }
  }
}