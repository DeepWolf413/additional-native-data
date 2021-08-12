// am_launcher.ysc @ L6314
float func_131(var* uParam0, int iParam1, float fParam2, bool bParam3)
{
  if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
  {
    return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
  }
  return fParam2;
}

Vector3 func_132(var* uParam0, int iParam1, struct<3> Param2, bool bParam5)
{
  if (bParam5 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
  {
    return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
  }
  return Param2;
}