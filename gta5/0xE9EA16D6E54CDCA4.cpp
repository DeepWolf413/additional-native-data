// am_rollercoaster.ysc @ L5583
void func_136()
{
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_726, false))
  {
    CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(iLocal_726, 1);
  }
}