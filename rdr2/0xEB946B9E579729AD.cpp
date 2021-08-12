// beat_skipping_stones.ysc @ L5957
void func_160(int iParam0)
{
  func_29(8388608);
  func_162(65536);
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_40[0], joaat("REL_PLAYER_DISLIKE"));
  PED::SET_PED_CONFIG_FLAG(uLocal_40[0], 448, false);
  func_345(uLocal_40[0], 1088421888 /* Float: 7f */, 0, 0);
  func_346(&(uLocal_40[0]), &(Local_391[0 /*21*/]), &Local_413, 1, 1);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_40[0], false);
  MISC::_0xEB946B9E579729AD(uLocal_40[0], 0);
  func_347(iParam0);
  PED::_0x24C82EF607105FAA(uLocal_40[0], joaat("TIMID"));
  PED::_0xE737D5F14304A2EC(uLocal_40[0], PLAYER::GET_PLAYER_INDEX(), 120000);
  if (iLocal_247 == 0)
  {
    PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_40[0], 7, 0, 1);
  }
}