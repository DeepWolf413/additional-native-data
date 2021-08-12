// es_clean_stalls.ysc @ L4772
void func_228()
{
  if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
  {
    if (func_117(Global_1899848.f_15.f_6))
    {
    }
    else
    {
      TASK::_SET_SCENARIO_POINT_COORDS(Global_1899848.f_15.f_1, Global_1899848.f_15.f_6, true);
      TASK::_SET_SCENARIO_POINT_HEADING(Global_1899848.f_15.f_1, Global_1899848.f_15.f_9, true);
    }
  }
}