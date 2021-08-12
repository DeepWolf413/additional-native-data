// grays2.ysc @ L55832
void func_1358()
{
  iLocal_543 = PED::CREATE_GROUP(0);
  PED::SET_GROUP_FORMATION(iLocal_543, 10);
  PED::SET_PED_CONFIG_FLAG(iLocal_432[2], 279, true);
  PED::SET_PED_AS_GROUP_LEADER(iLocal_432[2], iLocal_543, false);
  PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), iLocal_432[2], -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
  PED::_0x53BA7D96B9A421D9(Global_35, iLocal_432[0]);
  PED::_0x53BA7D96B9A421D9(Global_35, iLocal_432[2]);
  PED::_0x53BA7D96B9A421D9(Global_35, iLocal_432[1]);
}