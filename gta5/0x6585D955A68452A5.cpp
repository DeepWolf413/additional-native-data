// pilot_school.ysc @ L91433
void func_400()
{
  PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
  PED::CLEAR_PED_ENV_DIRT(PLAYER::PLAYER_PED_ID());
  PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
  PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
}