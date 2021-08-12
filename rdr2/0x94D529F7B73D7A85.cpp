// sadie4.ysc @ L33446
bool func_728(var uParam0)
{
  int iVar0;

  func_27(&uLocal_184, 1);
  func_1190(func_213(2, 1), 1000f, 0);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
  if (!WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false) || ((!WEAPON::_IS_WEAPON_PISTOL(iVar0) && !WEAPON::_IS_WEAPON_REVOLVER(iVar0)) && !func_1209(iVar0)))
  {
    WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 0, 1);
    func_1159(Global_35, 0, 0);
  }
  PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
  ENTITY::SET_ENTITY_MAX_HEALTH(Local_100, 999999);
  ENTITY::_SET_ENTITY_HEALTH(Local_100, 999999, 0);
  ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
  func_1162(uParam0, "NormalStart");
  PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, Local_100, -1, false);
  PED::_SET_PED_HEADSHOT_DAMAGE_MULTIPLIER(Local_100, 0.1f);
  PED::SET_PED_CONFIG_FLAG(Local_100, 263, true);
  PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 0.1f);
  Global_43838 = 0;
  HUD::_HIDE_HUD_COMPONENT(1733954764);
  if (func_1210(256))
  {
    func_830(0, 0);
  }
  func_1211(uParam0);
  return uParam0->f_607 == uParam0->f_607;
}