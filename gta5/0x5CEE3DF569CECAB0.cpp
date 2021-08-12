// barry2.ysc @ L44288
void func_455()
{
  int iVar0;
  
  if (func_62(PLAYER::PLAYER_PED_ID()))
  {
    if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_548, false))
    {
      WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_548, -1, true, true);
    }
    else if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true) || iVar0 != iLocal_548)
    {
      WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_548, true);
    }
    WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_548, 10000);
    WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), true, iLocal_548);
    WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
    PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
    if (WEAPON::DOES_WEAPON_TAKE_WEAPON_COMPONENT(iLocal_548, joaat("component_assaultshotgun_clip_02")))
    {
      WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_548, joaat("component_assaultshotgun_clip_02"));
    }
    PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
  }
}