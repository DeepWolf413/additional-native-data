// act_fishing06.ysc @ L43757
bool func_1298(var uParam0)
{
  bool bVar0;

  bVar0 = true;
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_70[0]))
  {
    uParam0->f_70[0] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2076.609f, -1910.732f, 40.84669f, joaat("WB_GATOR_EGG_NEST"), 1f, 0, false);
    bVar0 = false;
  }
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_70[1]))
  {
    uParam0->f_70[1] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2083.159f, -1917.445f, 41.08478f, joaat("WB_GATOR_EGG_NEST"), 1f, 0, false);
    bVar0 = false;
  }
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_70[2]))
  {
    uParam0->f_70[2] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2070.59f, -1925.389f, 41.64231f, joaat("WB_GATOR_EGG_NEST"), 1f, 0, false);
    bVar0 = false;
  }
  if (bVar0)
  {
    TASK::_0x5A40040BB5AE3EA2(uParam0->f_70[0]);
    TASK::_0x5A40040BB5AE3EA2(uParam0->f_70[1]);
    TASK::_0x5A40040BB5AE3EA2(uParam0->f_70[2]);
    return true;
  }
  return false;
}