// native_son2.ysc @ L35123
bool func_772(var uParam0)
{
  if (func_120(uParam0, 4))
  {
    func_1199(func_1389(sLocal_37, 10));
  }
  func_1390(&Local_1762, 0);
  func_1390(&Local_2023, 0);
  func_1392(&Local_1762, cLocal_49);
  func_1392(&Local_2023, cLocal_48);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_37, 1, 0.25f, 1f, 0);
  PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
  PED::SET_PED_CONFIG_FLAG(Global_35, 533, true);
  PED::SET_PED_CONFIG_FLAG(Global_35, 404, true);
  PED::SET_PED_CONFIG_FLAG(Local_83, 426, true);
  PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX(), 1f);
  func_1393(Local_83, joaat("BLIP_STYLE_COMPANION"), "", 0, -1186550032, 1);
  func_1241(uParam0);
  func_99(uParam0, 33554432);
  func_361(uParam0, 64);
  func_27(&uLocal_3244, 0);
  func_134(uParam0, 0);
  func_135(uParam0, 1);
  return uParam0->f_607 == uParam0->f_607;
}