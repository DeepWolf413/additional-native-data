// agency_heist3b.ysc @ L114107
void func_761()
{
  float fVar0;
  
  if (PLAYER::PLAYER_PED_ID() == func_117() && ((PED::IS_PED_IN_COVER(func_117(), false) || PED::IS_PED_GOING_INTO_COVER(func_117())) || PED::IS_PED_AIMING_FROM_COVER(func_117())))
  {
    if (PED::IS_PED_AIMING_FROM_COVER(func_117()))
    {
      if (iLocal_6529 != 1)
      {
        iLocal_6529 = 1;
        iLocal_6528 = MISC::GET_GAME_TIMER();
      }
      PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), true);
    }
    else if (iLocal_6529 != -1)
    {
      iLocal_6529 = -1;
      iLocal_6528 = MISC::GET_GAME_TIMER();
    }
    fVar0 = func_686((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_6528)) / 500f), 0f, 1f);
    if (iLocal_6529 == -1)
    {
      fVar0 = (1f - fVar0);
    }
    CAM::_CLAMP_GAMEPLAY_CAM_YAW(func_724(64.665f, 17.185f, fVar0), func_724(98.325f, 99.375f, fVar0));
    CAM::_CLAMP_GAMEPLAY_CAM_PITCH(func_724(-7.2f, -18.85f, fVar0), func_724(12.96f, 22.685f, fVar0));
    CAM::_ANIMATE_GAMEPLAY_CAM_ZOOM(func_724(0.9f, 0.9f, fVar0), func_724(1.2f, 1.2f, fVar0));
  }
}