// am_mp_property_ext.ysc @ L288016
void func_4403()
{
  int iVar0;
  
  if (func_4769(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
      {
        if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iVar0, 0, -1))
        {
          MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iVar0, true), 5f, 0);
        }
      }
    }
  }
}