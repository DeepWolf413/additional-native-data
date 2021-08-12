// fm_capture_creator.ysc @ L35138
void func_546(char* sParam0, var uParam1, int iParam2)
{
  if (*iParam2 == 0)
  {
    return;
  }
  DATAFILE::DATADICT_SET_FLOAT(*iParam2, sParam0, *uParam1);
}