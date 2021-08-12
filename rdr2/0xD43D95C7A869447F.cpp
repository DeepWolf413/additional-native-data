// loanshark_soldier.ysc @ L17756
void func_611()
{
  func_68(&uLocal_551);
  if (iLocal_15 == 1)
  {
    func_1127(Local_52, 1413.414f, 1169.4f, 183.958f, 2f, 0, 0);
    PED::SET_PED_COMBAT_ATTRIBUTES(Local_52, 11, true);
    TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_52, iLocal_508, 1414.915f, 1142.732f, 183.5915f, -1, 0, 0, 0);
  }
  else
  {
    TASK::TASK_SEEK_COVER_TO_COVER_POINT(Local_52, iLocal_508, 1414.915f, 1142.732f, 183.5915f, -1, 0, 0, 0);
  }
  func_594(1);
}