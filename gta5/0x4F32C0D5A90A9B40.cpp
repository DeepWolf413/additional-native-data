// act_cinema.ysc @ L3586
void func_83(float fParam0, int iParam1)
{
  struct<3> Var0;
  
  if (!func_84() || iParam1)
  {
    if (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
    {
      if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
      {
        Var0 = { func_93(PLAYER::PLAYER_ID()) };
        if (Var0.f_2 > -80f)
        {
          CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
          CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
        }
      }
    }
  }
}