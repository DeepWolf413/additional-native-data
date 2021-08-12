// fm_bj_race_controler.ysc @ L295573
void func_4141(var uParam0)
{
  int iVar0;
  
  PAD::DISABLE_CONTROL_ACTION(2, 230, true);
  WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
  PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_250(uParam0))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iVar0))
    {
      VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("vehicle_weapon_player_laser"), iVar0, PLAYER::PLAYER_PED_ID());
      VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("vehicle_weapon_ruiner_bullet"), iVar0, PLAYER::PLAYER_PED_ID());
      VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("vehicle_weapon_ruiner_rocket"), iVar0, PLAYER::PLAYER_PED_ID());
      VEHICLE::_SET_VEHICLE_WEAPON_CAPACITY(iVar0, 0, 0);
    }
  }
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, true);
}