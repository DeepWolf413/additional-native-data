// hideout_fortmercer.ysc @ L3521
void func_103(int iParam0)
{
  PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
  AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
  AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
  AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_Hideout_Fort_Mercer", false, true);
  func_237(&Local_244, &Local_20, &uLocal_538, SCRIPTS::GET_ID_OF_THIS_THREAD(), "FORTM");
}