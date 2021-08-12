// fm_mission_controller.ysc @ L802710
void func_13537(int iParam0, bool bParam1, struct<3> Param2)
{
  float fVar0;
  
  if (func_9652(iParam0, bParam1, 688521916, 0, 0, 0))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
    WEAPON::SET_CURRENT_PED_WEAPON(iParam0, WEAPON::GET_BEST_PED_WEAPON(iParam0, false), true);
    if (MISC::IS_BIT_SET(Global_4718592.f_84792[bParam1 /*703*/].f_320, 9))
    {
      fVar0 = 1f;
    }
    else
    {
      fVar0 = 2f;
    }
    if (MISC::IS_BIT_SET(Global_4718592.f_84792[bParam1 /*703*/].f_322, 10) && MISC::IS_BIT_SET(Local_19406.f_1480[func_768(bParam1)], func_767(bParam1)))
    {
      fVar0 = 3f;
    }
    if (bParam1 > -1)
    {
    }
    TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(iParam0, Param2, Param2, fVar0, true, 0.5f, 4f, true, 0, 0, -957453492);
    MISC::SET_BIT(&(uLocal_15684[func_768(bParam1)]), func_767(bParam1));
  }
}