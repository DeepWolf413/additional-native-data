// docks_setup.ysc @ L116363
void func_686()
{
  if (!PED::IS_PED_INJURED(iLocal_6135))
  {
    TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_6135, "floyddocks1", 0, 40, -1);
  }
}