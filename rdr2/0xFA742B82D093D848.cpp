// mudtown5.ysc @ L89477
int func_2300(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7)
{
  if (!func_891(*iParam0, 0))
  {
    return 0;
  }
  if (!func_2160(vParam1, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 1056964608 /* Float: 0.5f */, 1))
  {
    func_829(*iParam0, vParam1, fParam4, 2, 1073741824 /* Float: 2f */);
  }
  ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, bParam5);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
  PED::SET_PED_CONFIG_FLAG(*iParam0, 273, !bParam6);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
  FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
  if (PED::_0xA0BC8FAED8CFEB3C(*iParam0))
  {
    PED::_0xFA742B82D093D848(*iParam0, joaat("META_HORSE_SADDLE_ONLY"), 1);
    PED::_UPDATE_PED_VARIATION(*iParam0, true, false, true, true, false);
  }
  return 1;
}