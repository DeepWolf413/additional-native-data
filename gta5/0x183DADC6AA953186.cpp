// fbi2.ysc @ L126602
void func_774()
{
  int iVar0;
  
  iVar0 = func_715();
  if (!PED::IS_PED_INJURED(iVar0))
  {
    if (iLocal_791 < 0)
    {
      if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), false))
      {
        iLocal_791 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"));
      }
      else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), false))
      {
        iLocal_791 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"));
      }
    }
    if (WEAPON::GET_AMMO_IN_PED_WEAPON(iVar0, func_714(5)) == 0)
    {
      WEAPON::SET_PED_AMMO(iVar0, func_714(5), 1, false);
    }
    WEAPON::GIVE_WEAPON_TO_PED(iVar0, func_714(5), -1, true, true);
    WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, func_714(5));
    WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, true);
  }
}