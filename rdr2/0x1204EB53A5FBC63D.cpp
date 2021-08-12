// beat_drunk_dueler.ysc @ L33885
void func_1030()
{
  if (CAM::_0x1204EB53A5FBC63D())
  {
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
    PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_AIM"), false);
    PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
    PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
  }
}