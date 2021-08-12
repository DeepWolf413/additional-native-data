// beat_arms_deal.ysc @ L6075
void func_182()
{
  if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && func_34(iLocal_35[iLocal_1248], 0, 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iLocal_1248], -258271821, true) != 1)
  {
    TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_35[iLocal_1248], iLocal_34, 3f, 524295);
  }
}