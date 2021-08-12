// beat_bounty_transport.ysc @ L8983
float func_214(vector3 vParam0, vector3 vParam3)
{
  vector3 vVar0;
  vector3 vVar3;
  vector3 vVar6;
  var uVar9;
  var uVar10;
  var uVar11;

  if (func_191(vParam3))
  {
    return 0f;
  }
  if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &vVar0, &vVar3, &uVar9, &uVar10, &uVar11, false))
  {
    if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam3, vVar0, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam3, vVar3, true))
    {
      vVar6 = { vVar0 };
    }
    else
    {
      vVar6 = { vVar3 };
    }
    return func_438(vParam0, vVar6, 1);
  }
  return func_438(vParam3, vVar6, 1);
}