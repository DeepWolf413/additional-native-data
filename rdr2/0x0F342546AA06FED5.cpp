// gang3.ysc @ L73659
void func_1917(char[4] cParam0)
{
  int iVar0;

  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("gang3_SadieToGuards", Global_36, &iVar0);
  if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_207[0 /*9*/]) < iVar0 + 20)
  {
    if (func_1304(Local_207[0 /*9*/].f_7, 8))
    {
      if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_207[0 /*9*/]))
      {
        TASK::WAYPOINT_PLAYBACK_RESUME(Local_207[0 /*9*/], false, -1, 0);
      }
      func_1970(&(Local_207[0 /*9*/].f_7), 8);
    }
    if (TASK::GET_PED_WAYPOINT_PROGRESS(Local_207[0 /*9*/]) < iVar0 + 10)
    {
      TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_207[0 /*9*/], 3f, 0, -1f, 0);
    }
    else
    {
      TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_207[0 /*9*/], 2f, 0, 0.4f, 0);
    }
  }
  else if (!func_1304(Local_207[0 /*9*/].f_7, 8))
  {
    if (!func_1418("GNG3_S4_HURRYUP") && func_1414(cParam0, "GNG3_S4_HURRYUP", 0))
    {
      TASK::WAYPOINT_PLAYBACK_PAUSE(Local_207[0 /*9*/], 1, 0, 0);
      func_845(&(Local_207[0 /*9*/].f_7), 8);
    }
  }
}