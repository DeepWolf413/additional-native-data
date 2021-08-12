// am_airstrike.ysc @ L2038
void func_66()
{
  if (!iLocal_50)
  {
    if (func_42(Local_242.f_2))
    {
      TASK::OPEN_SEQUENCE_TASK(&iLocal_48);
      TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_242.f_2), 0, 0, Local_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
      TASK::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 2.802597E-44f, 1);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_48);
      iLocal_50 = 1;
    }
  }
}