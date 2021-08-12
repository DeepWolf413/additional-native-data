// am_launcher.ysc @ L6355
float func_136(int iParam0, char* sParam1, float fParam2)
{
  if (func_135(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 3)
  {
    return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
  }
  return fParam2;
}