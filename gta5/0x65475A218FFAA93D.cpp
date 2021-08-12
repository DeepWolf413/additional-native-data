// am_mp_vehicle_weapon.ysc @ L5721
void func_203()
{
  if (Local_121.f_30 != -1)
  {
    AUDIO::STOP_SOUND(Local_121.f_30);
    AUDIO::RELEASE_SOUND_ID(Local_121.f_30);
    Local_121.f_30 = -1;
  }
  if (Local_121.f_29 != -1)
  {
    AUDIO::STOP_SOUND(Local_121.f_29);
    AUDIO::RELEASE_SOUND_ID(Local_121.f_29);
    Local_121.f_29 = -1;
  }
  if (Local_121.f_49 != -1)
  {
    AUDIO::STOP_SOUND(Local_121.f_49);
    AUDIO::RELEASE_SOUND_ID(Local_121.f_49);
    Local_121.f_49 = -1;
  }
  AUDIO::STOP_AUDIO_SCENE("DLC_GR_MOC_Turret_View_Scene");
  AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}