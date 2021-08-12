// homeinvasion.ysc @ L16464
void func_406(int iParam0, int iParam1)
{
  if (!func_159(*iParam0, 0, 0))
  {
    return;
  }
  if (func_1311(iParam0))
  {
    if (!func_275(134217728, iParam1, 0))
    {
      func_85(134217728, iParam1, 0);
    }
  }
  else if (func_275(134217728, iParam1, 0))
  {
    func_425(134217728, iParam1, 0);
    switch (iLocal_18)
    {
      case 4:
      case 5:
        func_319(8192, iParam1, 0);
        TASK::CLEAR_PED_TASKS(*iParam0, true, false);
        TASK::_TASK_INTIMIDATED_2(*iParam0, Global_35, 0, 0, 0, 0, 0, 0, 0);
        break;
    }
  }
}