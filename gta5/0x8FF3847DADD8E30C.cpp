// fm_capture_creator.ysc @ L48131
void func_610(char* sParam0, char* sParam1, int iParam2)
{
  if (*iParam2 == 0)
  {
    return;
  }
  DATAFILE::DATADICT_SET_STRING(*iParam2, sParam0, sParam1);
}