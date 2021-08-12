// abigail2_1.ysc @ L77062
void func_2214(char* sParam0, int iParam1, int* iParam2, bool bParam3, bool bParam4)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam1))
  {
    if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
    {
      if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), iParam2))
      {
        if (bParam3)
        {
          TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sParam0, *iParam2, 0, -1, 0, 0, -1);
        }
        else
        {
          TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam0, *iParam2, 0, -1, 0, 0, -1);
        }
      }
      else if (bParam3)
      {
        TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sParam0, 0, 0, -1, 0, 0, -1);
      }
      else
      {
        TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam0, 0, 0, -1, 0, 0, -1);
      }
      PED::SET_PED_KEEP_TASK(iParam1, bParam4);
    }
  }
}