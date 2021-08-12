// region_law_guama_fussar.ysc @ L1303
void func_41(int iParam0)
{
  LAW::_0x819ADD5EF1742F47(iParam0, 2);
  LAW::_0x819ADD5EF1742F47(iParam0, 1);
  PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
  PED::_0xBD75500141E4725C(iParam0, joaat("LAW"));
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 39, true);
  TASK::_0x9DE63896B176EA94(iParam0, 0);
  WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
  WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, joaat("GROUP_REVOLVER"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
  WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, joaat("GROUP_SNIPER"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}