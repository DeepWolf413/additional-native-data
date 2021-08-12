// am_mp_arcade_claw_crane.ysc @ L83552
void func_597()
{
  if (func_594(PLAYER::PLAYER_ID()) || func_115(13))
  {
    if (func_566(PLAYER::PLAYER_ID()) == 12)
    {
      if (CAM::DOES_CAM_EXIST(Local_270.f_40) || func_599())
      {
        if (func_598(PLAYER::PLAYER_PED_ID()))
        {
          NETWORK::SET_ENTITY_LOCALLY_INVISIBLE(PLAYER::PLAYER_PED_ID());
        }
      }
    }
  }
}