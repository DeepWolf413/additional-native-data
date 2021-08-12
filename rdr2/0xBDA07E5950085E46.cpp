// beat_stalking_shadows.ysc @ L595
void func_2()
{
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1353))
  {
    PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_1353, 4, 0);
  }
  ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_359);
  VEHICLE::DELETE_VEHICLE(&iLocal_359);
  func_19(&Local_360, &iLocal_1373, &uLocal_1389, iLocal_1035, uLocal_1612, uLocal_1611, 0, 1, 0, 1);
  func_20("RESSH_END", 0);
  AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RESSH_Area", false, true);
  if (Local_360.f_44)
  {
    if (!func_21(56))
    {
      func_22(56, 1);
    }
  }
  SCRIPTS::TERMINATE_THIS_THREAD();
}