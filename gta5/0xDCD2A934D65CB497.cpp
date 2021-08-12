// barry1.ysc @ L41669
void func_368(int iParam0)
{
  int iVar0;
  
  if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    return;
  }
  if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), *iParam0, false))
  {
    WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), *iParam0);
  }
  *iParam0 = func_370(*iParam0);
  iVar0 = func_369(*iParam0);
  WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), *iParam0, iVar0, true, true);
  if (*iParam0 == iLocal_191)
  {
    WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), true, *iParam0);
  }
  else
  {
    WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), *iParam0, 0);
    WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), *iParam0, 0, false);
    WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), *iParam0, iVar0);
  }
}