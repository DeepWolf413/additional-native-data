// finalec1.ysc @ L107446
void func_631(int iParam0, int iParam1)
{
  int iVar0;
  
  if (!func_793(Local_196[iParam0 /*14*/]))
  {
    return;
  }
  if (!func_793(iParam1))
  {
    return;
  }
  func_632(iParam0);
  PED::REMOVE_PED_DEFENSIVE_AREA(Local_196[iParam0 /*14*/], false);
  PED::REMOVE_PED_DEFENSIVE_AREA(Local_196[iParam0 /*14*/], true);
  PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_196[iParam0 /*14*/], iParam1, 10f, 0f, 10f, -10f, 0f, -10f, 10f, false, false);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
  TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iParam1, iParam1, 2f, true, 5f, 8f, true, false, -687903391);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
  TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(Local_196[iParam0 /*14*/], iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  PED::SET_PED_ACCURACY(Local_196[iParam0 /*14*/], 5);
  Local_196[iParam0 /*14*/].f_11 = 5;
}