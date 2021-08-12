// guama2.ysc @ L65492
void func_1688()
{
  bool bVar0;
  bool bVar1;

  bVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LEFT_ONLY")) > 0.1f;
  bVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_RIGHT_ONLY")) > 0.1f;
  if (bVar0 && vLocal_86.x > -0.75f)
  {
    vLocal_86.x = (vLocal_86.x - 0.05f);
  }
  if (bVar1 && vLocal_86.x < 0.75f)
  {
    vLocal_86.x = (vLocal_86.x + 0.05f);
  }
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
  {
    TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(Global_35, vLocal_86);
  }
}