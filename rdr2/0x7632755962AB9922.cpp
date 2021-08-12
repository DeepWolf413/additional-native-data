// train_robbery3.ysc @ L33557
bool func_708(var uParam0)
{
  vector3 vVar0;

  if (!ENTITY::IS_ENTITY_DEAD(iLocal_121))
  {
    vVar0 = { func_1159(0, 2) };
    VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_121, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vVar0));
  }
  if (!func_854(uParam0, 1, 0))
  {
    return false;
  }
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
  WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
  func_1186(&Global_35, &iLocal_121, 0, 1);
  func_1186(&iLocal_127, &iLocal_121, -1, 1);
  MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
  PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_ACCELERATE"), false);
  return uParam0->f_607 == uParam0->f_607;
}