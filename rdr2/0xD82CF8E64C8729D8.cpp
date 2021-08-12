// marston4.ysc @ L72615
bool func_1826(vector3 vParam0, float fParam3, float fParam4)
{
  bool bVar0;

  if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_2269(PLAYER::PLAYER_ID()), vParam0, true) <= (fParam4 + fParam3))
  {
    bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
  }
  if (!bVar0)
  {
    bVar0 = NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam0, fParam3, (fParam4 + fParam3));
  }
  return bVar0;
}