// minute3.ysc @ L53076
void func_574()
{
  int iVar0;
  
  if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), false))
  {
    iVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"));
    if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0) < 12)
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, true, true);
    }
  }
  else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), false))
  {
    iVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"));
    if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0) < 12)
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, true, true);
    }
  }
  else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), false))
  {
    iVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"));
    if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0) < 12)
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, true, true);
    }
  }
  else
  {
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, true, true);
  }
}