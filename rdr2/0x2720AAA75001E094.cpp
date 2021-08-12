// act_bankrobbery01.ysc @ L38733
int func_1142(int iParam0, char* sParam1)
{
  if (!func_29(iParam0, 0))
  {
    return 0;
  }
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, sParam1))
  {
    return TASK::GET_PED_WAYPOINT_PROGRESS(iParam0);
  }
  return 0;
}