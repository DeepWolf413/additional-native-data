// fm_mission_controller.ysc @ L589665
int func_9774(int iParam0)
{
  if (MISC::IS_BIT_SET(Global_4456448.f_86088[iParam0 /*187*/].f_15, 22))
  {
    if (!PED::IS_PED_INJURED(iLocal_3285))
    {
      if ((PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(iLocal_3285) || func_49(&(Local_1813[iLocal_1745 /*2*/]))) && MISC::IS_BIT_SET(Global_4456448.f_86088[iParam0 /*187*/].f_15, 23))
      {
        return 1;
      }
      else if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_3285, false) || func_49(&(Local_1813[iLocal_1745 /*2*/]))) && !MISC::IS_BIT_SET(Global_4456448.f_86088[iParam0 /*187*/].f_15, 23))
      {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}