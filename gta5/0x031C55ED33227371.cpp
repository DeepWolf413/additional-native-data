// am_launcher.ysc @ L6341
int func_134(int iParam0, char* sParam1, int iParam2)
{
  if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 1)
  {
    return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
  }
  return iParam2;
}