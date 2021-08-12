// long_update.ysc @ L44764
void func_1441(bool bParam0, bool bParam1)
{
  float fVar0;

  fVar0 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
  *bParam0 = 0;
  *bParam1 = 0;
  if (fVar0 >= 24f)
  {
    *bParam1 = 1;
  }
  else if (fVar0 <= 0f)
  {
    *bParam0 = 1;
  }
  if (func_2005())
  {
    *bParam0 = 0;
  }
}