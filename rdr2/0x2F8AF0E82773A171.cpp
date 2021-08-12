// mudtown3b.ysc @ L79328
void func_2369(int iParam0, int iParam1, bool bParam2)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (ENTITY::IS_ENTITY_DEAD(PED::_GET_RIDER_OF_MOUNT(iParam0, false)))
    {
      if (!ENTITY::IS_ENTITY_DEAD(iParam1))
      {
        if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 518218985, true) != 1)
        {
          TASK::TASK_SMART_FLEE_PED(iParam0, iParam1, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
          func_2673(&iParam0, 1);
        }
      }
    }
    else if (bParam2)
    {
      if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(PED::_GET_RIDER_OF_MOUNT(iParam0, false)))
      {
        TASK::TASK_DRIVE_BY(PED::_GET_RIDER_OF_MOUNT(iParam0, false), iParam1, 0, 0f, 0f, 0f, 400f, 70, true, -753768974);
      }
    }
  }
}