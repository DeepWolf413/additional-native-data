// camp_beaverhollow.ysc @ L4421
void func_123()
{
  PED::SET_PED_RESET_FLAG(Global_35, 203, true);
  if (Local_18.f_1934.f_79)
  {
    GRAPHICS::_0xA201A3D0AC087C37("CamTransitionBlinkSlow");
    Local_18.f_1934.f_79 = 0;
  }
  func_181(&(Local_18.f_1934.f_80), 1);
}