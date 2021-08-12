// abigail2_1.ysc @ L38936
void func_964(int iParam0)
{
  if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
  {
    if (iParam0 == 1)
    {
      if (TASK::_IS_SCENARIO_POINT_FLAG_SET(Global_1899848.f_15.f_1, 8))
      {
        TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848.f_15.f_1, 8, false);
      }
    }
    else if (!TASK::_IS_SCENARIO_POINT_FLAG_SET(Global_1899848.f_15.f_1, 8))
    {
      TASK::_SET_SCENARIO_POINT_FLAG(Global_1899848.f_15.f_1, 8, true);
    }
  }
}