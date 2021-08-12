// agency_prep1.ysc @ L4344
void func_97()
{
  if (bLocal_1099)
  {
    if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, false) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, false) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_909, iLocal_910))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_909, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_909, false))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_910) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_910, true)) > 250f))
    {
      bLocal_1099 = false;
    }
  }
  else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_910, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_910, false)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_909, iLocal_910))
  {
    bLocal_1099 = true;
  }
}