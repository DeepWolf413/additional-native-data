// am_launcher.ysc @ L6290
struct<16> func_129(var* uParam0, int iParam1, char* sParam2, bool bParam3)
{
  struct<16> Var0;
  
  if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
  {
    StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
  }
  else
  {
    StringCopy(&Var0, sParam2, 64);
  }
  return Var0;
}