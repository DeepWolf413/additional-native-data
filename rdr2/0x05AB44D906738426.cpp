// camp_beechershope.ysc @ L34546
void func_1085(var uParam0, var uParam1)
{
  PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
  CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
  if (TASK::_0x0C3CB2E600C8977D(Global_35, 1))
  {
    uParam0->f_1582.f_2 = 4;
    if (func_210(uParam0->f_1610))
    {
      func_211(&(uParam0->f_1610), 1, 1);
    }
    uParam0->f_1581 = 8;
    return;
  }
}