// am_pi_menu.ysc @ L399715
int func_5746()
{
  if ((MISC::GET_GAME_TIMER() - PED::_GET_TIME_OF_LAST_PED_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID(), joaat("weapon_bzgas"))) < 500 || (MISC::GET_GAME_TIMER() - PED::_GET_TIME_OF_LAST_PED_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID(), joaat("weapon_smokegrenade"))) < 500)
  {
    return 1;
  }
  return 0;
}