// beat_town_burial.ysc @ L4313
void func_130()
{
  if (iLocal_765 > 1)
  {
    if (!bLocal_961)
    {
      if (func_247(iLocal_731[1], 0, &(Local_87.f_5), &iLocal_913, 1, 0))
      {
        if (iLocal_913 == 2048)
        {
          TASK::CLEAR_SEQUENCE_TASK(&iLocal_978);
          TASK::OPEN_SEQUENCE_TASK(&iLocal_978);
          if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_731[2], iLocal_987, true, 0))
          {
            TASK::TASK_CLIMB(0, true);
          }
          TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_20, 1f, -1, 0.25f, 0, 40000f);
          TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_20, 5f, 0, false, false, true, false);
          TASK::CLOSE_SEQUENCE_TASK(iLocal_978);
          TASK::TASK_PERFORM_SEQUENCE(iLocal_731[1], iLocal_978);
          TASK::CLEAR_SEQUENCE_TASK(&iLocal_978);
          PED::SET_PED_KEEP_TASK(iLocal_731[2], true);
          bLocal_961 = true;
        }
      }
    }
  }
}