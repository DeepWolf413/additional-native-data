// rcm_bounty_rancher1.ysc @ L37667
void func_1274()
{
  int iVar0;
  int iVar1;

  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (func_287(iLocal_825[iVar0], 0))
    {
      if (PED::IS_PED_IN_GROUP(iLocal_825[iVar0]))
      {
        PED::REMOVE_PED_FROM_GROUP(iLocal_825[iVar0]);
      }
      if (!func_294(iLocal_825[iVar0], 242628503))
      {
        TASK::CLEAR_PED_TASKS(iLocal_825[iVar0], true, false);
        TASK::OPEN_SEQUENCE_TASK(&iVar1);
        TASK::TASK_GOTO_ENTITY_OFFSET_XY_AIMING(0, Global_35, 0, -1, 15f, 0, 0, 2f, 56);
        TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 5f, 1f, 0);
        TASK::CLOSE_SEQUENCE_TASK(iVar1);
        TASK::TASK_PERFORM_SEQUENCE(iLocal_825[iVar0], iVar1);
        TASK::CLEAR_SEQUENCE_TASK(&iVar1);
      }
    }
    iVar0++;
  }
}