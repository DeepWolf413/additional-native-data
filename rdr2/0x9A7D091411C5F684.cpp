// rcm_creole1.ysc @ L6549
void func_240(var uParam0)
{
  if (!PED::IS_PED_IN_VEHICLE(iLocal_14, iLocal_174, false))
  {
    TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
    TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_14, iLocal_174, -1);
  }
  func_441(uParam0);
  func_377(&iLocal_263);
  func_443();
}