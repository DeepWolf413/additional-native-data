// mob3.ysc @ L35470
bool func_769(var uParam0)
{
  AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iLocal_1134[0], "TROLLEY01X_Mob3");
  func_1260(&(uParam0->f_7375.f_872));
  func_1261(uParam0, 524288);
  func_1262(uParam0, Local_166[0 /*10*/], 8);
  func_1262(uParam0, Local_166[1 /*10*/], 8);
  func_379(uParam0, 65536);
  VEHICLE::_0xCF9DA72002FC16BF(Global_35, iLocal_1134[0], 47);
  GRAPHICS::SET_TIMECYCLE_MODIFIER("mob3_optimize_main");
  return uParam0->f_607 == uParam0->f_607;
}