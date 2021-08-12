// camp_beaverhollow.ysc @ L33187
bool func_1088(int* iParam0)
{
  vector3 vVar0;
  vector3 vVar3;

  vVar0 = { CAM::GET_CAM_COORD(iParam0->f_816) };
  vVar3 = { func_1089(func_148(), 1) };
  if (vVar0.z == vVar3.z)
  {
    return true;
  }
  return false;
}