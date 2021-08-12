// agency_heist3a.ysc @ L129239
void func_957()
{
  float fVar0;
  
  if (OBJECT::DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(iLocal_4959[12]))
  {
    fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_4959[12]);
    if (MISC::ABSF(fVar0) < 0.1f)
    {
      if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_7302))
      {
        iLocal_7302 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_agency3a_door_hvy_stat", 128.6654f, -730.9644f, 258.2f, 0f, 0f, 344.9527f, 1f, false, false, false, false);
      }
      if (func_3(&iLocal_7303, 3000))
      {
        iLocal_7301 = 1;
      }
    }
    else
    {
      if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_7302))
      {
        GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_7302, false);
      }
      iLocal_7303 = MISC::GET_GAME_TIMER();
    }
    if (fVar0 < -0.4f && iLocal_7301)
    {
      GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_agency3a_door_hvy_trig", 128.6654f, -730.9644f, 258.2f, 0f, 0f, 344.9527f, 1f, false, false, false);
      iLocal_7301 = 0;
    }
  }
}