// stripperhome.ysc @ L8329
void func_262(int iParam0)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    TASK::SET_PED_PATH_AVOID_FIRE(iParam0, true);
    if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
    {
      TASK::CLEAR_SEQUENCE_TASK(&iLocal_339);
      TASK::OPEN_SEQUENCE_TASK(&iLocal_339);
      TASK::TASK_USE_MOBILE_PHONE_TIMED(0, 8000);
      TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_305, 1.5f, -1, 0.25f, false, 40000f);
      TASK::CLOSE_SEQUENCE_TASK(iLocal_339);
      TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_339);
    }
  }
}