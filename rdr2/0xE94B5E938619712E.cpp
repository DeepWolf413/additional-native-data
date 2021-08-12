// train_fast_travel_core.ysc @ L143
void func_2()
{
  func_45();
  func_46(-1, 0, 0, 0, 0);
  LAW::_0xE94B5E938619712E();
  func_34(0);
  func_47(&(Global_1392581.f_3), 8);
  CAM::DO_SCREEN_FADE_OUT(2000);
  bLocal_102 = false;
  iLocal_91 = func_48();
  iLocal_99 = func_49(iLocal_92);
  bLocal_106 = true;
  if (func_51(Global_35, func_43(7), func_50(7), 1) && !TASK::IS_PED_IN_WRITHE(func_43(7)))
  {
    ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), true);
    bLocal_101 = true;
  }
  if (func_51(Global_35, func_43(1), func_50(1), 1) && !TASK::IS_PED_IN_WRITHE(func_43(1)))
  {
    ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), true);
    bLocal_100 = true;
  }
  func_52(iLocal_91, 0, &vLocal_93, &uLocal_96);
  if (!STREAMING::_0xCF45DF50C7775F2A())
  {
    STREAMING::_0x513F8AA5BF2F17CF(vLocal_93, 40f, 0);
  }
  func_53(func_37());
  iLocal_103 = MISC::GET_GAME_TIMER();
}