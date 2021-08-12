// rural_bank_heist.ysc @ L96755
void func_474()
{
  if (!iLocal_2053)
  {
    if (func_442(&Local_1674))
    {
      if (!PED::IS_PED_INJURED(func_359()))
      {
        ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_359(), true);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_359(), false);
        PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_359(), -148.5988f, 6147.738f, 31.3352f, 2.75f, true, false);
        TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(func_359(), 130f, -1, 0);
        iLocal_2053 = 1;
      }
    }
  }
}