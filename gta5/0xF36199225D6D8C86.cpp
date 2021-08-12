// main_persistent.ysc @ L71240
int func_488(bool bParam0)
{
  if (bParam0)
  {
    Global_2453903.f_6396 = (Global_2453903.f_6396 + 0.01f);
  }
  else
  {
    Global_2453903.f_6396 = (Global_2453903.f_6396 - 0.01f);
  }
  if (Global_2453903.f_6396 > 1f)
  {
    Global_2453903.f_6396 = 1f;
  }
  if (Global_2453903.f_6396 < 0f)
  {
    Global_2453903.f_6396 = 0f;
  }
  MISC::_SET_CLOUD_HAT_OPACITY(Global_2453903.f_6396);
  if (bParam0)
  {
    if (Global_2453903.f_6396 >= 1f)
    {
      return 1;
    }
  }
  else if (Global_2453903.f_6396 <= 0f)
  {
    return 1;
  }
  return 0;
}