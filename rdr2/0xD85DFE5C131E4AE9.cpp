// abigail2_1.ysc @ L16140
void func_86()
{
  var uVar0;
  var uVar1;
  vector3 vVar2;

  func_91(4112);
  func_90(6);
  vVar2 = { func_361(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
  func_362(vVar2, uVar1, uVar0, 0);
  func_363(vVar2);
  Global_40.f_9.f_15 = func_364(vVar2, 0);
  MISC::CLEAR_WEATHER_TYPE_PERSIST();
  MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}