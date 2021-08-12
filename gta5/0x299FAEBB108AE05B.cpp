// am_taxi.ysc @ L6482
void func_148()
{
  if (!func_26(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5))
  {
    if (CAM::DOES_CAM_EXIST(iLocal_2600) && CAM::IS_CAM_ACTIVE(iLocal_2600))
    {
      HUD::LOCK_MINIMAP_POSITION(Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5, Local_263[NETWORK::PARTICIPANT_ID_TO_INT() /*44*/].f_4.f_5.f_1);
      HUD::LOCK_MINIMAP_ANGLE(0);
      HUD::SET_RADAR_ZOOM(1400);
    }
  }
}