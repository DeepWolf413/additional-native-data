// beat_drunk_dueler.ysc @ L51579
int func_1575(var uParam0)
{
  if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_23))
  {
    if (TASK::_GET_PED_USING_SCENARIO_POINT(uParam0->f_23) != func_1723())
    {
      return 0;
    }
    else
    {
      TASK::_DELETE_SCENARIO_POINT(uParam0->f_23);
    }
  }
  if (func_875(&(uParam0->f_4), 50, 10, 0))
  {
    if (uParam0->f_3 != 0)
    {
      uParam0->f_23 = func_236(uParam0->f_3, uParam0->f_4, func_1724(uParam0->f_10), uParam0->f_11, uParam0->f_12, 0);
    }
    TASK::_0xE69FDA40AAC3EFC0(uParam0->f_23, 0);
    uParam0->f_15 = 1;
    return 1;
  }
  return 0;
}