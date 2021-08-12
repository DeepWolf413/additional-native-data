// braithwaites3.ysc @ L36373
bool func_800(var uParam0)
{
  func_1248();
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_101[2 /*10*/], 27, false);
  PED::REMOVE_PED_DEFENSIVE_AREA(Local_101[2 /*10*/], false);
  PED::SET_PED_COMBAT_MOVEMENT(Local_101[2 /*10*/], 1);
  TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_38, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
  CAM::_0x6519238858AF5479(0.05f);
  HUD::_DISPLAY_HUD_COMPONENT(1058184710);
  WEAPON::SET_PED_INFINITE_AMMO(Global_35, false, 0);
  func_166(uParam0, Local_101[2 /*10*/], 1);
  return uParam0->f_607 == uParam0->f_607;
}