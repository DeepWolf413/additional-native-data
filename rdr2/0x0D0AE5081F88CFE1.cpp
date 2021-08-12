// beat_town_robbery.ysc @ L2199
void func_31()
{
  func_36(iLocal_742[0], Global_35, func_35("AGGRO_ANNOY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
  TASK::CLEAR_PED_SECONDARY_TASK(iLocal_742[0]);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_1218);
  TASK::TASK_CONFRONT(0, Global_35, 2);
  TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
  func_158(iLocal_742[0], &iLocal_1218, 0, 0, 1, 1);
  PED::SET_PED_KEEP_TASK(iLocal_742[0], true);
  func_33(&iLocal_35, 134217728);
  func_46(&iLocal_1217);
  func_46(&(uLocal_747[0]));
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1469))
  {
    VOLUME::_DELETE_VOLUME(iLocal_1469);
  }
  func_159(&Local_441);
  if (MISC::_0x0D0AE5081F88CFE1(Local_20.f_12))
  {
    MISC::_0x154340E87D8CC178(Local_20.f_12);
  }
  if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYSTACK")))
  {
    MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYSTACK"));
  }
  func_45();
  func_78();
  func_79();
  iLocal_1352 = 0;
  func_46(&(uLocal_747[0]));
  func_33(&iLocal_35, 1024);
  func_12();
}