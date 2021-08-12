// beat_prison_wagon.ysc @ L7629
void func_194()
{
  int iVar0;

  if (func_53(iLocal_1173, 134217728))
  {
    return;
  }
  if (func_50(uLocal_1476[0], 0, 1) && func_41(uLocal_1476[0], iLocal_1505, 0))
  {
    if (ENTITY::IS_ENTITY_DEAD(uLocal_1476[1]))
    {
      TASK::OPEN_SEQUENCE_TASK(&iVar0);
      if (!ENTITY::IS_ENTITY_DEAD(iLocal_1505))
      {
        TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_1505, Global_35, 8, 8.5f, 524359, 300f, -1f, true);
      }
      else
      {
        TASK::_TASK_DISEMBARK_VEHICLE(0, iLocal_1505, 20000, 0, 1073741824 /* Float: 2f */, 1);
        TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
      }
      TASK::CLOSE_SEQUENCE_TASK(iVar0);
      TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_1476[0], iVar0, 1f, 3f);
      TASK::CLEAR_SEQUENCE_TASK(&iVar0);
      func_197(uLocal_1476[0], &(uLocal_1486[0]), -118010418, 580546400, 0, 0);
      func_27(&iLocal_1173, 134217728);
    }
  }
}