// am_launcher.ysc @ L6314
float func_131(var* uParam0, int iParam1, float fParam2, bool bParam3)
{
  if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
  {
    return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
  }
  return fParam2;
}