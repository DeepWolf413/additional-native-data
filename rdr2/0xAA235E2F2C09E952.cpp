// cornwall1.ysc @ L54142
void func_1281()
{
  if (func_179(uLocal_362, 4194304) || !CAM::_0xAA235E2F2C09E952("Script@Story@CRN1@ChaseCameras"))
  {
    CAM::_0x8910C24B7E0046EC();
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
  }
  else if (func_1808(Global_35, iLocal_983[17], 0, 1))
  {
    CAM::SET_CINEMATIC_MODE_ACTIVE(false);
    func_850(&uLocal_362, 4194304);
  }
  PED::SET_PED_RESET_FLAG(Global_35, 210, true);
}