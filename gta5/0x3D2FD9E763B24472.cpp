// am_launcher.ysc @ L6391
struct<16> func_140(int iParam0, char* sParam1, char* sParam2)
{
  struct<16> Var0;
  
  if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 4)
  {
    StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
  }
  else
  {
    StringCopy(&Var0, sParam2, 64);
  }
  return Var0;
}