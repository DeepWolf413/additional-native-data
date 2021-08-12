// cornwall1.ysc @ L35961
bool func_768(char[4] cParam0)
{
  func_1299(cParam0, 1);
  func_223(&(Local_254[0 /*11*/].f_5));
  func_27(&(vLocal_896[4 /*3*/]), 1);
  func_450(cParam0, Local_760[0 /*8*/]);
  func_450(cParam0, Local_760[1 /*8*/]);
  func_450(cParam0, Local_760[2 /*8*/]);
  func_450(cParam0, iLocal_867);
  func_450(cParam0, Local_254[1 /*11*/].f_1);
  func_450(cParam0, Local_254[2 /*11*/].f_1);
  func_450(cParam0, Local_254[0 /*11*/].f_1);
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
  PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
  func_1014(Local_254[1 /*11*/].f_1, Local_254[1 /*11*/].f_10, 0, 0, 1);
  func_1014(Local_254[2 /*11*/].f_1, Local_254[2 /*11*/].f_10, 0, 0, 1);
  func_1014(Local_254[0 /*11*/].f_1, Local_254[0 /*11*/].f_10, 0, 0, 1);
  ENTITY::_0x18FF3110CF47115D(Global_35, 9, 0);
  CLOCK::PAUSE_CLOCK(true, 0);
  HUD::_HIDE_HUD_COMPONENT(724769646);
  if (!func_179(uLocal_362, 2))
  {
    MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 30f, false);
    func_850(&uLocal_362, 2);
  }
  CAM::_CLAMP_GAMEPLAY_CAM_YAW(70f, 140f);
  CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-60f, 30f);
  func_928(7);
  func_928(1);
  return cParam0->f_607 == cParam0->f_607;
}