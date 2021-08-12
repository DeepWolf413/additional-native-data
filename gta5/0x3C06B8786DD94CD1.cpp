// fm_mission_controller.ysc @ L805090
void func_13585(int iParam0, bool bParam1, struct<3> Param2, float fParam5)
{
  if ((!PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iParam0, false) || !func_1367(PED::GET_PED_DEFENSIVE_AREA_POSITION(iParam0, false), Param2, 1056964608, 0)) || PED::GET_PED_COMBAT_MOVEMENT(iParam0) != 1)
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
    if (fParam5 > 0.75f)
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param2, fParam5, true, false);
    }
    else
    {
      PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param2, 0.75f, true, false);
    }
    PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 4, true);
  }
  if (func_9652(iParam0, bParam1, -1442466670, 0, 0, 0) && !PED::IS_PED_IN_COMBAT(iParam0, 0))
  {
    if ((!func_13587(bParam1) || func_13586(bParam1)) || MISC::IS_BIT_SET(Global_4718592.f_84792[bParam1 /*703*/].f_325, 15))
    {
      TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 299f, 0);
      MISC::CLEAR_BIT(&(uLocal_15684[func_768(bParam1)]), func_767(bParam1));
    }
  }
}