// abigail2_1.ysc @ L57279
bool func_1501(int iParam0)
{
  vector3 vVar0;

  if (!func_1200(23, &vVar0))
  {
    return false;
  }
  vVar0.f_2 = 1781729525;
  if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
  {
    vVar0.f_2 = -2103982008;
    *iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
    return true;
  }
  return false;
}