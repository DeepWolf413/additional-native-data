// abigail2_1.ysc @ L48808
void func_1230()
{
  int iVar0;

  PED::SET_PED_CONFIG_FLAG(Local_38[0 /*8*/], 279, false);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_38[0 /*8*/], false);
  func_1668(Local_38[0 /*8*/]);
  PED::REMOVE_PED_FROM_GROUP(Local_38[0 /*8*/]);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2560.901f, 399.3542f, 147.1741f, 1f, -1, 0.25f, 4202497, 40000f);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2543.956f, 400.4932f, 147.2358f, 1f, -1, 0.25f, 4202497, 40000f);
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(Local_38[0 /*8*/], iVar0);
  if (func_435(Local_38[0 /*8*/], 0))
  {
    func_176(714, 0, 1, 0, 0);
  }
}