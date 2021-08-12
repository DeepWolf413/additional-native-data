// finale1.ysc @ L84415
void func_2101()
{
  int iVar0;
  int iVar1;

  if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_225[4 /*9*/], 0))
  {
    return;
  }
  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1508[3], ENTITY::GET_ENTITY_COORDS(Local_225[4 /*9*/], true, false), &iVar1);
  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1508[3], Global_36, &iVar0);
  if (func_1386(Local_225[4 /*9*/], func_410(12, 13), 15f, 1, 1))
  {
    TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Local_225[4 /*9*/]);
  }
  else if (iVar0 >= iVar1 || func_1003(Local_225[4 /*9*/], Global_35, 10f, 1))
  {
    TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_225[4 /*9*/], 2.5f, 0, func_1598(func_1389(&(Local_225[4 /*9*/].f_4)) >= 5f, 0.4f, -1f), 0);
  }
  else if (!func_1003(Local_225[4 /*9*/], Global_35, 15f, 1))
  {
    TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_225[4 /*9*/], 1.501f, 0, func_1598(func_1389(&(Local_225[4 /*9*/].f_4)) >= 5f, 0.4f, -1f), 0);
  }
  else
  {
    TASK::WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Local_225[4 /*9*/]);
  }
}