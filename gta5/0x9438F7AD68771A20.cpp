// agency_heist3b.ysc @ L133264
void func_997(int iParam0, float fParam1)
{
  float fVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
    {
      fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
      VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0, (fParam1 - fVar0));
    }
  }
}