// finale1.ysc @ L85186
bool func_2139(bool bParam0)
{
  int iVar0;
  int iVar1;

  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1508[2], ENTITY::GET_ENTITY_COORDS(Local_225[1 /*9*/], true, false), &iVar0);
  TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_1508[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar1);
  if (iVar0 >= 49)
  {
    if (((iVar1 < (iVar0 - 3) && !func_1003(Global_35, Local_225[1 /*9*/], func_1598(bParam0, 10f, 14f), 1)) && !PED::IS_PED_CLIMBING(Local_225[1 /*9*/])) && !func_2588())
    {
      return true;
    }
  }
  else if (iVar1 < (iVar0 - func_1312(bParam0, 4, 7)) && !PED::IS_PED_CLIMBING(Local_225[1 /*9*/]))
  {
    return true;
  }
  if (iVar0 >= 5 && Global_1935630.f_5 == 0)
  {
    return true;
  }
  return false;
}