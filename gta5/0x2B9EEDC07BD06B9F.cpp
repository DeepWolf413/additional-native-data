// hunting2.ysc @ L49878
void func_552()
{
  if (func_8(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), false))
  {
    iLocal_1796 = 1;
    iLocal_2304 = WEAPON::GET_PED_WEAPON_TINT_INDEX(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
    iLocal_1798 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
    if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_ar_supp_02")))
    {
      iLocal_1797 = 1;
    }
    if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_large")))
    {
      iLocal_2225 = 1;
    }
    if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_at_scope_max")))
    {
      iLocal_2226 = 1;
    }
    if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), joaat("component_sniperrifle_clip_01")))
    {
      iLocal_2224 = 1;
    }
  }
}