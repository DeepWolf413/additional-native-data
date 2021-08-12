// beat_brontes_town_encounter.ysc @ L12031
void func_383(int iParam0, float fParam1)
{
  int iVar0;

  PED::_0x58F7DB5BD8FA2288(Local_14.f_294[iParam0]);
  PED::_0x935CF6E42BAF7F4D(Local_14.f_294[iParam0]);
  func_185(&(Local_14.f_298[iParam0]));
  if (!PED::_IS_PED_USING_SCENARIO_POINT(Local_14.f_294[iParam0], Local_14.f_496[iParam0]))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_14.f_197[iParam0 /*32*/].f_6, 1f, -1, 2f, 0, 40000f);
    TASK::_TASK_USE_SCENARIO_POINT(0, Local_14.f_496[iParam0], func_51(&Local_14, iParam0), -1, true, false, 0, false, -1f, false);
    func_180(Local_14.f_294[iParam0], &iVar0, fParam1, 0, 1, 1);
  }
}