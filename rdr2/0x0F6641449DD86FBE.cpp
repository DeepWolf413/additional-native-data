// trainrobbery_ambient.ysc @ L6570
void func_249(int iParam0, int iParam1, int iParam2)
{
  vector3 vVar0;

  if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam1 /*14*/].f_6))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_310[iParam1 /*14*/], true, false) };
    iParam0->f_310[iParam1 /*14*/].f_6 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("PROP_VEHICHLE_SEAT_PASSENGER_TRAIN_TG"), 4f, 1, false);
  }
  if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_310[iParam1 /*14*/].f_6))
  {
    if (func_11(iParam0->f_310[iParam1 /*14*/].f_7, 256))
    {
      TASK::_TASK_USE_SCENARIO_POINT_2(iParam0->f_310[iParam1 /*14*/], Global_35, iParam0->f_310[iParam1 /*14*/].f_6, 0, -1, 0, -1f, false);
    }
    else
    {
      TASK::_TASK_USE_SCENARIO_POINT(iParam0->f_310[iParam1 /*14*/], iParam0->f_310[iParam1 /*14*/].f_6, 0, -1, false, true, 0, false, -1f, false);
    }
  }
}