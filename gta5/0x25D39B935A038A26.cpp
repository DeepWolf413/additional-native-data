// am_casino_peds.ysc @ L222902
void func_2285(var uParam0, var uParam1)
{
  NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), false, false);
  if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam1->f_27))
  {
    if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam1->f_27) > 0f && !MISC::IS_BIT_SET(uParam1->f_187, false))
    {
      if (func_15(uParam1->f_139[1]))
      {
        AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uParam1->f_139[1], "BOUNCER_EJECT_GENERIC", "", func_435(10), false);
      }
      MISC::SET_BIT(&(uParam1->f_187), false);
    }
    else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam1->f_27) > 0.3f)
    {
      if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
      {
        CAM::DO_SCREEN_FADE_OUT(500);
      }
      else if (CAM::IS_SCREEN_FADED_OUT())
      {
        uParam1->f_27 = -1;
      }
    }
  }
}