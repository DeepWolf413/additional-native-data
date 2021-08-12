// event_area_appleseed_stg3.ysc @ L14052
void func_411()
{
  var uVar0[2];

  uVar0[0] = iLocal_2077[0];
  uVar0[1] = iLocal_2077[1];
  if (!func_70(64))
  {
    if (func_720(&Local_2201, &uVar0, &uLocal_2199, 0, func_19(2)))
    {
      if (!func_131(Local_2201.f_31, -1931174604))
      {
        TASK::TASK_GUARD_CURRENT_POSITION(Local_2201.f_31, 10f, 50f, true);
      }
    }
  }
}