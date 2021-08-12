// act_fishing01.ysc @ L20154
void func_547()
{
  if ((func_29(iLocal_27, 0) && !func_531(iLocal_27, -982327190)) && PED::_IS_MOUNT_SEAT_FREE(iLocal_27, -1))
  {
    TASK::TASK_STAND_STILL(iLocal_27, -1);
  }
  if ((func_29(iLocal_28, 0) && !func_531(iLocal_28, -982327190)) && PED::_IS_MOUNT_SEAT_FREE(iLocal_28, -1))
  {
    TASK::TASK_STAND_STILL(iLocal_28, -1);
  }
}