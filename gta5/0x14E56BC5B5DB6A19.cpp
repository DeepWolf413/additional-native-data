// agency_heist3a.ysc @ L121227
void func_838()
{
  if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), false))
  {
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5, false, false);
  }
  else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb")) < 5)
  {
    WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5, false);
  }
}