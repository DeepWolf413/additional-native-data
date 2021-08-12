// fm_bj_race_controler.ysc @ L270603
void func_3593()
{
  if (func_2543(joaat("gadget_parachute")))
  {
    WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
  }
  PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
}