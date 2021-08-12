// gang3.ysc @ L35861
int func_776(var uParam0)
{
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("gang3_RouteToPrison", 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
  PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
  PED::_0x56E9C26CD29D1ED6(Global_35, 0);
  if (func_163(Local_405[0 /*8*/], 0))
  {
    PED::_0x56E9C26CD29D1ED6(Local_405[0 /*8*/], 0);
  }
  PED::_0x789DABD18E9024DB(Global_35, 0, 1);
  PED::_0x7C10221CE718AA72(Global_35, 14);
  PED::_0x78815FC52832B690(Local_207[0 /*9*/], 1);
  func_1264();
  func_1336(0);
  func_1337(0);
  func_1338(0);
  return 1;
}