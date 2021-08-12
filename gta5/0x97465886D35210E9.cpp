// assassin_valet.ysc @ L6088
void func_129(int iParam0, struct<3> Param1)
{
  if (!iLocal_1134)
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_1045, iParam0, Param1, false, true, 0))
      {
        if (PED::IS_PED_FACING_PED(iParam0, iLocal_1045, 160f))
        {
          if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_1045, 17))
          {
            TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1045, iLocal_1045, 1f, false, -1f, 4f, true, false, -957453492);
            iLocal_1044 = 5;
            iLocal_1134 = 1;
          }
        }
      }
      else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
      {
        if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
        {
          TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_1045, iLocal_1045, 1f, false, -1f, 4f, true, false, -957453492);
        }
      }
    }
  }
}