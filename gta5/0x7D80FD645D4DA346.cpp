// family3.ysc @ L32947
void func_489(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, char* sParam22, float fParam23, int iParam24, float fParam25, int iParam26, int iParam27, int iParam28)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Param0, false))
  {
    if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0))
    {
      if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Param0.f_9, sParam22))
      {
        if (iParam27 == 0)
        {
          VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Param0, Param0.f_9, sParam22, true);
        }
        else if (iParam27 == 1)
        {
          VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Param0, Param0.f_9, sParam22, iParam28, 0, 786603);
        }
        if (fParam25 > 0f)
        {
          VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, fParam25);
        }
        else if (iParam26 == 1)
        {
          VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, func_490(ENTITY::GET_ENTITY_COORDS(Param0, true), Param0.f_9, sParam22, 16));
        }
        VEHICLE::SET_PLAYBACK_SPEED(Param0, fParam23);
        if (iParam24 == 1)
        {
          VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Param0);
        }
      }
    }
  }
}