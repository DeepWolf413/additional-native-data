// country_race_controller.ysc @ L967
void func_33()
{
  if (((((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 3 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4) && !CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && func_34(iLocal_157)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 20f)
  {
    if (iLocal_159)
    {
      if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
      {
        CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_157, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
        iLocal_159 = 0;
      }
    }
  }
  else
  {
    if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
    {
      CAM::STOP_GAMEPLAY_HINT(false);
    }
    iLocal_159 = 1;
  }
}