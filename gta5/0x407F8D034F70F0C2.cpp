// fm_capture_creator.ysc @ L34822
void func_541(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
  if (*iParam2 == 0)
  {
    return;
  }
  if (*iParam3 == 0 || iParam4 == 0)
  {
    *iParam3 = DATAFILE::DATADICT_CREATE_ARRAY(*iParam2, sParam0);
  }
  DATAFILE::DATAARRAY_ADD_VECTOR(*iParam3, *uParam1);
}