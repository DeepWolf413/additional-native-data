// av_female_rider_male_walker.ysc @ L2547
float func_48(vector3 vParam0)
{
  float fVar0;
  var uVar1;
  vector3 vVar4;
  vector3 vVar7;

  PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam0, &uVar1, &fVar0, 1, 3f, 0);
  vVar4 = { Global_36 - vParam0 };
  vVar4.f_2 = 0f;
  vVar4 = { func_99(vVar4) };
  vVar7 = { -BUILTIN::SIN(fVar0), BUILTIN::COS(fVar0), 0f };
  if (func_100(vVar4, vVar7) < 0f)
  {
    fVar0 = (fVar0 + 180f);
  }
  return fVar0;
}