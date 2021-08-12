// rcm_oh_brother1.ysc @ L8806
void func_307()
{
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
  func_201(0);
  PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
  iLocal_232 = func_455(Global_35, 1, 0, 0);
  if (iLocal_232 != 0)
  {
  }
  if (iLocal_232 == joaat("WEAPON_UNARMED"))
  {
    iLocal_232 = func_455(Global_35, 1, 2, 0);
  }
  PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), iLocal_232, 0);
  WEAPON::_0x183CE355115B6E75(Global_35, iLocal_232);
  func_607();
  if (func_206(Global_35, 0))
  {
    PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
    PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
    PED::SET_PED_CONFIG_FLAG(Global_35, 217, true);
    PED::SET_PED_CONFIG_FLAG(Global_35, 6, true);
    iLocal_231 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iLocal_232);
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iLocal_232, true, 0, false, false);
    WEAPON::SET_PED_INFINITE_AMMO(Global_35, true, iLocal_232);
  }
  HUD::_HIDE_HUD_COMPONENT(1058184710);
}