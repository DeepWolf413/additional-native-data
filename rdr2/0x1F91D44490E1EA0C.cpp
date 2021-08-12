// benchmark.ysc @ L3742
void func_107(var uParam0)
{
  RECORDING::_STOP_RECORDING_THIS_FRAME();
  CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
  CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
  PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(uParam0->f_95);
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(uParam0->f_94);
  VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(uParam0->f_94);
  VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
  PED::_0xAB0D553FE20A6E25(uParam0->f_93);
  HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_SELECT"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_LEADERBOARD"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_SOCIAL_CLUB"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY"), false);
  POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
  POPULATION::_0xF45E46DEECF7DF6E(4194304, 0, 0, -1, -1);
  PED::SET_PED_RESET_FLAG(Global_35, 134, true);
  if (func_108(uParam0) != 7)
  {
    PED::SET_PED_RESET_FLAG(Global_35, 25, true);
  }
}