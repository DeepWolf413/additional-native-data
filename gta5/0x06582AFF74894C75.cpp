// exile1.ysc @ L18794
void func_300()
{
  func_285(5);
  func_284();
  func_159();
  GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_525[2], true);
  VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_525[2], true);
  VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_525[2], true);
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_525[2], false))
  {
    VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_525[2], 2, true);
  }
}