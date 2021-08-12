// finale1.ysc @ L38133
bool func_809(var uParam0)
{
  if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, false))
  {
    WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 30, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
  }
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), true, 0, false, false);
  WEAPON::_GIVE_WEAPON_COMPONENT_TO_ENTITY(Global_35, joaat("COMPONENT_RIFLE_SCOPE04"), joaat("WEAPON_SNIPERRIFLE_CARCANO"), false);
  func_1392(joaat("WEAPON_SNIPERRIFLE_CARCANO"), joaat("COMPONENT_RIFLE_SCOPE04"), 1);
  func_1356(Local_225[0 /*9*/], joaat("WEAPON_REPEATER_CARBINE_SADIE"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
  MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
  GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(func_410(12, 21), 100f);
  return uParam0->f_607 == uParam0->f_607;
}