// assassin_construction.ysc @ L18735
void func_379()
{
  iLocal_2174 = func_380(1);
  if (iLocal_2174 != 0)
  {
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_2174, 0, false, false);
  }
  else
  {
    iLocal_2174 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
    WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_2174, 0, false, false);
  }
}