// agency_heist3b.ysc @ L137193
void func_1053(var uParam0, bool bParam1)
{
  uParam0->f_15 = 0;
  uParam0->f_16 = 0;
  uParam0->f_17 = 0;
  uParam0->f_18 = 0;
  uParam0->f_19 = 0;
  uParam0->f_20 = 0;
  if (CAM::DOES_CAM_EXIST(uParam0->f_9))
  {
    if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
    {
      func_1055(0);
    }
    CAM::DESTROY_CAM(uParam0->f_9, false);
  }
  if (!Global_43148)
  {
    CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
    CAM::_0x487A82C650EB7799(0f);
    CAM::_0x0225778816FDC28C(0f);
  }
  Global_2405077.f_603 = 0f;
  if (!bParam1)
  {
    CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
  }
}