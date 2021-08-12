// am_mp_arcade_claw_crane.ysc @ L83759
void func_608()
{
  if (!AUDIO::HAS_SOUND_FINISHED(Local_270.f_9))
  {
    AUDIO::SET_VARIABLE_ON_SOUND(Local_270.f_9, "claw_speed", Local_270.f_12);
  }
}