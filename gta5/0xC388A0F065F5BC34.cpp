// am_mp_armory_truck.ysc @ L324902
void func_5109()
{
  Global_74433 = 0;
  if (func_4943())
  {
    func_84();
  }
  if (Local_162.f_461 != -1)
  {
    func_46(&(Local_162.f_461));
  }
  if ((func_83() || func_82()) || func_81())
  {
    HUD::CLEAR_HELP(true);
  }
  PAD::ENABLE_CONTROL_ACTION(0, 0, true);
  func_78(&Local_162);
  MISC::CLEAR_BIT(&(Local_162.f_462), true);
  Local_162.f_7 = "";
  PLAYER::_SET_PLAYER_HEALTH_RECHARGE_LIMIT(PLAYER::GET_PLAYER_INDEX(), 0.5f);
  func_93(-1);
  Global_74433 = 0;
}