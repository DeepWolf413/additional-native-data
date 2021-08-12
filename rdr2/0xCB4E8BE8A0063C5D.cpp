// abigail2_1.ysc @ L51423
bool func_1330(var uParam0)
{
  if (func_845(uParam0->f_3, 2))
  {
    return true;
  }
  if (!func_845(uParam0->f_3, 1))
  {
    func_817(uParam0);
  }
  switch (uParam0->f_1)
  {
    case 2:
      if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
      {
        func_811(&(uParam0->f_3), 2);
        return true;
      }
      break;
    case 1:
      if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
      {
        func_811(&(uParam0->f_3), 2);
        return true;
      }
      break;
  }
  return false;
}