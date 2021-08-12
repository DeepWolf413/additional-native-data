// agency_heist1.ysc @ L110157
int func_687()
{
  int iVar0;
  
  iVar0 = 0;
  if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1012, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1011, false)) && !PED::IS_PED_INJURED(iLocal_1007))
  {
    if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1012, false))
    {
      if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1012, false), ENTITY::GET_ENTITY_COORDS(iLocal_1011, false)) < 10000f)
      {
        if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_1012))
        {
          iVar0 = 1;
        }
        if (ENTITY::GET_ENTITY_SPEED(iLocal_1012) > 60f)
        {
          iVar0 = 1;
        }
        if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
        {
          iVar0 = 1;
        }
        if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
        {
          iVar0 = 1;
        }
      }
    }
  }
  return iVar0;
}