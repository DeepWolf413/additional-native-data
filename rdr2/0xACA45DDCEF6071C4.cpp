// gang3.ysc @ L35385
int func_759(var uParam0)
{
  func_552(&uLocal_902);
  PLAYER::_0xACA45DDCEF6071C4(PLAYER::PLAYER_ID(), 0);
  func_1272(Local_380[2 /*8*/], 0);
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_911))
  {
    iLocal_911 = TASK::CREATE_SCENARIO_POINT(joaat("FALL_OVER_WALL"), 3151.86f, -492.09f, 49.27f, 239.7505f, 2f, 0, 0);
  }
  TASK::CLEAR_PED_TASKS(Local_380[2 /*8*/], true, false);
  WEAPON::_GIVE_WEAPON_TO_PED_2(Local_380[2 /*8*/], joaat("WEAPON_KIT_BINOCULARS"), 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
  func_1273(Local_380[2 /*8*/], joaat("WEAPON_REPEATER_CARBINE"), 0, 0, 9, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
  return 1;
}