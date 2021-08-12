// mudtown5.ysc @ L55453
int func_1245(char[4] cParam0)
{
  int iVar0;
  int iVar1;

  iLocal_2758 = func_1222();
  iLocal_2759 = 1;
  func_1792(iLocal_620, func_201(1, 7), 2, 1073741824 /* Float: 2f */);
  func_1792(iLocal_625[0], func_201(1, 5), 2, 1073741824 /* Float: 2f */);
  func_1792(iLocal_625[2], func_201(1, 6), 2, 1073741824 /* Float: 2f */);
  func_1792(iLocal_625[1], func_201(1, 4), 2, 1073741824 /* Float: 2f */);
  WEAPON::_0xB832F1A686B9B810(Global_35, true, 0);
  func_99(cParam0, 134217728);
  iVar0 = func_760(Global_35, 1, 0, 0);
  if (iVar0 == joaat("WEAPON_UNARMED"))
  {
    iVar1 = func_1793(0, 0);
    WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar1);
    WEAPON::_0x14FF0C2545527F9B(cParam0->f_5411, iVar1, Global_35);
  }
  PED::_SET_PED_BODY_COMPONENT(uLocal_621[1], -972364774);
  PED::_UPDATE_PED_VARIATION(uLocal_621[1], false, true, true, true, false);
  PED::_SET_PED_BODY_COMPONENT(uLocal_621[2], -972364774);
  PED::_UPDATE_PED_VARIATION(uLocal_621[2], false, true, true, true, false);
  AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_621[0], "MUD5_KAREN_MIXGROUP", 0f);
  func_1194(cParam0, "2-Harlot");
  MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), true, true, true, 30f, false);
  return 1;
}