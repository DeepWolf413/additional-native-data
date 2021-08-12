// am_mp_arcade_claw_crane.ysc @ L84750
void func_641()
{
  int iVar0;
  
  iVar0 = 1;
  PAD::_0x7F4724035FDCA1DD(2);
  PAD::ENABLE_CONTROL_ACTION(2, 201, true);
  func_642(&(Local_270.f_1[2]), &(Local_270.f_1[3]), &(Local_270.f_1[0]), &(Local_270.f_1[1]), 0, 0);
  if (PAD::_IS_USING_KEYBOARD(0))
  {
    iVar0 = 5;
    Local_270.f_1[0] = (Local_270.f_1[0] * iVar0);
    Local_270.f_1[1] = (Local_270.f_1[1] * iVar0);
  }
}