// rcm_down3.ysc @ L20619
void func_723(var uParam0)
{
  func_288(uParam0, func_61(1), func_61(2), 1, 2, 0);
  func_211(uParam0, 4);
  if (!func_1225(Global_35, iLocal_122[4], 1, 0))
  {
    func_126(uParam0, func_212(4), 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
  }
  if (!MAP::DOES_BLIP_EXIST(iLocal_21))
  {
    iLocal_21 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_88[0 /*5*/]);
    MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_21, "DISCOVERABLE_NAME_THOMAS_DOWNES");
  }
  if (!WEAPON::_0x07E1C35F0078C3F9(Global_35, joaat("WEAPON_UNARMED")))
  {
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
  }
  func_302(3);
  func_208(&uLocal_111);
  AUDIO::STOP_PED_SPEAKING(Global_35, true);
}