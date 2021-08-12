// event_area_castorspond.ysc @ L6781
bool func_206()
{
  if (iLocal_18 < 5)
  {
    return true;
  }
  if ((func_4() - iLocal_1853) > 10000)
  {
    return true;
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1759[3]))
  {
    return false;
  }
  if (VOLUME::_0xEE1D6FF54CAF7714(iLocal_1759[3], func_159(68)))
  {
    return true;
  }
  func_413(67, iLocal_1759[3], 1);
  func_413(68, iLocal_1759[3], 0);
  VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_1759[3], 0, 1);
  VOLUME::_0x53D05D60E5F5B40C(iLocal_1759[3], 0, 1, func_159(68));
  return true;
}