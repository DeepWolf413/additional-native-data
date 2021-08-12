// epsilon6.ysc @ L42691
void func_378()
{
  if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("ep_plane", 0))
  {
    func_521("Doing plane exit state");
    if (func_239())
    {
      ENTITY::SET_ENTITY_COORDS(Local_156.x, 1684.78f, 3255.58f, 41.78f, true, false, false, true);
      ENTITY::SET_ENTITY_HEADING(Local_156.x, 284.26f);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_156.x, 5f);
    }
    else
    {
      func_5(&Local_156);
      Local_156.x = VEHICLE::CREATE_VEHICLE(Local_156.f_1, 1684.78f, 3255.58f, 41.78f, 284.26f, true, true, false);
      func_480(Local_156.x, 0);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_156.x, 5f);
    }
    if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_156.x))
    {
      if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(501, "Eps6_Takeoff"))
      {
        VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_156.x, 501, "Eps6_Takeoff", true);
        VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_156.x, true);
        VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_156.x);
        func_521("Started/paused vehicle recording on plane");
      }
    }
  }
}