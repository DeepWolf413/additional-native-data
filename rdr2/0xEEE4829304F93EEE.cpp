// beat_crashed_wagon.ysc @ L2823
void func_60(var uParam0, var uParam1, bool bParam2)
{
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(*uParam0))
  {
    return;
  }
  if (bParam2)
  {
    TASK::_SET_SCENARIO_POINT_ACTIVE(*uParam0, true);
  }
  else if (func_203())
  {
    *uParam1 = 1;
    TASK::_SET_SCENARIO_POINT_ACTIVE(*uParam0, false);
  }
  else
  {
    return;
  }
}