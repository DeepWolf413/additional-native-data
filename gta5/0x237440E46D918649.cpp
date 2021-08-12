// freemode.ysc @ L1011042
void func_15884()
{
  if (Global_2405077.f_503 == 1 || Global_2405077.f_501 == joaat("vehicle_weapon_hunter_barrage"))
  {
    if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("hunter"))
    {
      WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("vehicle_weapon_hunter_barrage"));
    }
    else
    {
      PLAYER::_0x237440E46D918649(PLAYER::PLAYER_ID());
    }
  }
}