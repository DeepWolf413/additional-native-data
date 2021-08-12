// beat_rally.ysc @ L10086
void func_294(int iParam0, float fParam1, float fParam2)
{
  int iVar0;

  if (func_55(iParam0, 0, 1))
  {
    PHYSICS::_0x0348469DAA17576C(iParam0);
    PHYSICS::_0xBDDA142759307528(iParam0);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
    TASK::TASK_SMART_FLEE_COORD(0, Local_43.f_51, 500f, -1, false, 2f);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, fParam1, fParam2);
  }
}