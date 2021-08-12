// am_pi_menu.ysc @ L474780
void func_6626()
{
  int iVar0;
  int iVar1;
  
  if (func_555(iLocal_1588) != 0)
  {
    iVar0 = WEAPON::_GET_PED_AMMO_TYPE_FROM_WEAPON_2(PLAYER::PLAYER_PED_ID(), iLocal_1588);
    iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0);
    WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), iVar0, (iVar1 + iLocal_1589));
  }
  else if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_1588, false))
  {
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_1588, iLocal_1589, false, true);
  }
  else
  {
    WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_1588, iLocal_1589);
  }
  iLocal_1588 = 0;
  iLocal_1589 = -1;
  iLocal_1436 = MISC::GET_GAME_TIMER();
  MISC::CLEAR_BIT(&bLocal_1354, 2);
  func_442(1, 1, 0, "GIVE_OUT_PURCHASED_AMMO");
  Global_2520131 = 1;
}