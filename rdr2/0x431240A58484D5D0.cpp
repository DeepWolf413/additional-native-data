// native_son2.ysc @ L55543
void func_1379()
{
  func_1986(&Local_1762, 0);
  func_1986(&Local_2023, -1);
  Local_2417.f_2 = Global_35;
  func_1987(&Local_1762, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
  func_1987(&Local_1762, -1034486097);
  func_1987(&Local_2023, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
  func_1987(&Local_2023, -1034486097);
  PED::_SET_PED_DAMAGE_MODIFIER(Local_2417, 10f);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_2417, true);
  WEAPON::_0x5230D3F6EE56CFE6(Local_2417, 0);
  WEAPON::_SET_PED_INFINITE_AMMO_CLIP(Local_2417, true);
  WEAPON::_0x431240A58484D5D0(Local_2417, 0);
  PED::SET_PED_CONFIG_FLAG(Local_1762[1 /*26*/], 159, true);
  PED::_0x8ACC0506743A8A5C(Local_1762[1 /*26*/], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
}