// train_robbery3.ysc @ L33953
bool func_717(var uParam0)
{
  if (func_10(iLocal_152))
  {
    func_11(&iLocal_152, 1, 1);
  }
  func_1179(1);
  func_169(iLocal_620);
  func_1181(&iLocal_123);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_489, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_490, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_141, 0, 1065353216 /* Float: 1f */, 0.5f, 1);
  func_47(0, 0);
  PED::SET_PED_CONFIG_FLAG(iLocal_127, 375, false);
  TASK::_0xFA30E2254461ADEB(Global_35, 0);
  return uParam0->f_607 == uParam0->f_607;
}