// fm_mission_controller.ysc @ L573002
void func_9415(int iParam0, bool bParam1)
{
  char* sVar0;
  char* sVar1;
  
  if (bParam1)
  {
    CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 1f);
    GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(func_9416(0, 0), func_9416(1, 0), func_9416(2, 0));
    GRAPHICS::USE_PARTICLE_FX_ASSET("scr_powerplay");
    GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_powerplay_beast_vanish", iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 4f, false, false, false);
    sVar0 = func_5131();
    AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Beast_Attack", iLocal_3286, sVar0, true, 250);
  }
  else
  {
    CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 1f);
    GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(func_9416(0, 0), func_9416(1, 0), func_9416(2, 0));
    GRAPHICS::USE_PARTICLE_FX_ASSET("scr_powerplay");
    GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_powerplay_beast_appear", iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2.5f, false, false, false);
    sVar1 = func_5131();
    AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Beast_Attack", iLocal_3286, sVar1, true, 250);
  }
}