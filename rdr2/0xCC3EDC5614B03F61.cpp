// beat_bandito_execution.ysc @ L300
void func_6()
{
  func_32("REBE_IDLE_OW", 0);
  func_33(uLocal_570[0], &Local_398, &Local_475);
  func_33(uLocal_570[1], &iLocal_377, &Local_440);
  func_33(uLocal_570[2], &Local_419, &Local_510);
  if (func_34(348, 1))
  {
    func_35(348, iLocal_18 <= 1, 0, 0, 0);
  }
  func_36(&uLocal_570, 1);
  if (Local_23.f_44)
  {
    MISC::_0xCC3EDC5614B03F61(32);
  }
  func_37(&Local_23, &uLocal_570, &uLocal_575, iLocal_14, uLocal_375, uLocal_376, 0, 1, 0, 1);
  func_38();
  func_39(Local_366);
  func_40();
  func_41(1);
  SCRIPTS::TERMINATE_THIS_THREAD();
}