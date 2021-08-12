// ambush_odr_hso.ysc @ L10227
bool func_348()
{
  vector3 vVar0;

  PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &vVar0, 1, 3f, 0f);
  if (!func_69(vVar0))
  {
    if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > 12f)
    {
      return false;
    }
    return true;
  }
  return false;
}