// epsilon4.ysc @ L35750
void func_252()
{
  if (func_231(Local_606[1 /*8*/]))
  {
    if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Boston", 0))
    {
      if (iLocal_353 >= 2)
      {
        if (func_231(Local_83.f_28[1]) && func_288(iLocal_362))
        {
          TASK::OPEN_SEQUENCE_TASK(&iLocal_782);
          TASK::TASK_WARP_PED_INTO_VEHICLE(0, iLocal_362, 0);
          TASK::CLOSE_SEQUENCE_TASK(iLocal_782);
          TASK::TASK_PERFORM_SEQUENCE(Local_83.f_28[1], iLocal_782);
          TASK::CLEAR_SEQUENCE_TASK(&iLocal_782);
          func_402("Did Jimmy pass exit");
        }
      }
      else
      {
        TASK::TASK_GO_STRAIGHT_TO_COORD(Local_83.f_28[1], 1764.089f, 4665.879f, 42.3031f, 1f, 20000, 40000f, 0.5f);
        func_402("Did Jimmy regular exit");
      }
      PED::FORCE_PED_MOTION_STATE(Local_606[1 /*8*/], -668482597, false, 1, false);
    }
  }
}