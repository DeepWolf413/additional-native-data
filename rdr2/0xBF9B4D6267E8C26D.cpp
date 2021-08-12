// gang2.ysc @ L35280
int func_761(char[4] cParam0)
{
  func_922();
  VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_378[1]);
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
  func_166((iLocal_307 || iLocal_308), cParam0, 0);
  func_170(Local_14.f_69);
  func_170(Local_14.f_79);
  func_170(Local_14.f_38);
  func_174(&iLocal_403, 0);
  func_1310(2);
  func_1310(1);
  if (bLocal_464)
  {
    AUDIO::_STOP_SOUND_WITH_NAME("alarm_bell", "GNG2_sounds");
  }
  return 1;
}