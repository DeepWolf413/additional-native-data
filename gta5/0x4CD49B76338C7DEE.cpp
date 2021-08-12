// fm_capture_creator.ysc @ L47999
void func_607(char* sParam0, var uParam1, int iParam2)
{
  if (*iParam2 == 0)
  {
    return;
  }
  DATAFILE::DATADICT_SET_VECTOR(*iParam2, sParam0, *uParam1);
}