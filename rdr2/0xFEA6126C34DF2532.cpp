// mary1.ysc @ L33580
bool func_726(var uParam0)
{
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_135[0 /*9*/], true);
  POPULATION::_0xBC90BDF4E5228EA1();
  PED::_0xFEA6126C34DF2532(Local_135[0 /*9*/], 1);
  WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
  WEAPON::SET_CURRENT_PED_WEAPON(Local_135[0 /*9*/], joaat("WEAPON_UNARMED"), true, 0, false, false);
  ENTITY::FREEZE_ENTITY_POSITION(func_173(7), false);
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
  {
    VEHICLE::DELETE_MISSION_TRAIN(&iLocal_89);
  }
  MISC::_SET_WEATHER_TYPE(joaat("CLOUDS"), false, true, true, 40f, false);
  func_168(0);
  PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 1f);
  return uParam0->f_607 == uParam0->f_607;
}