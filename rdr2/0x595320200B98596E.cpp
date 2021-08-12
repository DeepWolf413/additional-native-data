// act_bankrobbery01.ysc @ L49789
float func_1526(vector3 vParam0, bool bParam3)
{
  vector3 vVar0;
  vector3 vVar3;

  vVar0 = { func_1789(0) };
  vVar3 = { func_1790(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
  if (bParam3)
  {
    return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
  }
  return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}