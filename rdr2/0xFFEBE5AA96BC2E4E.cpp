// beat_dark_alley_bum.ysc @ L803
void func_18()
{
  vector3 vVar0;

  func_80();
  func_81(uLocal_689[0], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
  func_82(uLocal_689[0], 1, 0);
  WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_689[0], true, true);
  PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -440666838 /* GXTEntry: "Beggar" */);
  if (iLocal_583 == 0)
  {
    vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_389.f_51, Local_389.f_51.f_3, 0.5f, -0.55f, 1f) };
  }
  else
  {
    vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_389.f_51, Local_389.f_51.f_3, -0.1f, -0.5f, 1f) };
  }
  TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_689[0], Local_264[2 /*2*/], Local_264[2 /*2*/].f_1, vVar0, 0f, 0f, Local_389.f_51.f_3, 1000f, -8f, -1, 1, 0f, 2, 0, 0);
  func_83(uLocal_689[0], &Local_389, 0);
  func_84(uLocal_689[0], 3);
  PED::SET_PED_CONFIG_FLAG(uLocal_689[0], 6, true);
  LAW::_0xFFEBE5AA96BC2E4E(uLocal_689[0], joaat("CRIME_UNARMED_ASSAULT"), 1);
}