// abigail2_1.ysc @ L67189
void func_1867(char* sParam0, int iParam1, int iParam2, float fParam3)
{
  int iVar0;
  int iVar1;
  var uVar2;

  if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2))
  {
    if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
    {
      if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar0))
      {
        if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, (iVar0 - 1), &uVar2))
        {
          if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 658540077, true) != 1)
          {
            func_2214(sParam0, iParam1, &iVar1, 0, 0);
          }
          else if (func_856(iParam1, iParam2, 1, 1) > fParam3)
          {
            TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, 2f, 0, -1082130432 /* Float: -1f */, 0);
            PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam1, 2f);
          }
          else if (func_856(iParam1, iParam2, 1, 1) < 5f)
          {
            TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1, 1f, 0, -1082130432 /* Float: -1f */, 0);
            PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1, 1f);
          }
        }
      }
    }
  }
}