// es_activity_building.ysc @ L2415
void func_115()
{
  PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
  PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_CINEMATIC_CAM"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PICKUP_CARRIABLE"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_WHEEL_MENU"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_AIM"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_ATTACK"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MELEE_ATTACK"), false);
  PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_TOGGLE_HOLSTER"), false);
}