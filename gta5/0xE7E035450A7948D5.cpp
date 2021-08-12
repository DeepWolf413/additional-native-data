// fm_capture_creator.ysc @ L34861
void func_544(char* sParam0, int iParam1, int iParam2)
{
  if (*iParam2 == 0)
  {
    return;
  }
  DATAFILE::DATADICT_SET_INT(*iParam2, sParam0, *iParam1);
}