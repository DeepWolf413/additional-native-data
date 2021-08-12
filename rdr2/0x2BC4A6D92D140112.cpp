// fussar2.ysc @ L76392
void func_2137(int iParam0)
{
  int iVar0;
  vector3 vVar1;

  PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 11, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 43, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
  PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (PED::IS_PED_IN_COVER(iParam0, false, false))
  {
    vVar1.x = 0;
    vVar1.f_1 = 1;
    vVar1.f_2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
    AICOVERPOINT::TASK_EXIT_COVER(&vVar1);
  }
  TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}