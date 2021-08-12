// am_launcher.ysc @ L6305
int func_130(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
  if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
  {
    return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
  }
  return iParam2;
}