// fm_bj_race_controler.ysc @ L69911
void func_596()
{
  if (func_599() && Global_1574410 == 3)
  {
    return;
  }
  PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), func_598());
  PLAYER::SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), func_597());
}