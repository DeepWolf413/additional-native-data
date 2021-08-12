// abigail2_1.ysc @ L16952
void func_152(bool bParam0, bool bParam1)
{
  if (CAM::_0x450769C833D58844() && (!bParam0 || !CAM::IS_CINEMATIC_CAM_RENDERING()))
  {
    HUD::_0xC9CAEAEEC1256E54(-1679307491);
    if (!bParam1)
    {
      PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
      if (Global_1935689.f_1 || Global_1935689 == 1)
      {
        Global_1935689 = 2;
      }
    }
  }
}