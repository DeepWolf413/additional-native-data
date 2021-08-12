// rcm_creole1.ysc @ L4263
void func_138(var uParam0)
{
  AUDIO::TRIGGER_MUSIC_EVENT(sLocal_259);
  if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() == iLocal_174)
  {
    VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
  }
}