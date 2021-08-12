// freemode.ysc @ L929511
var func_13895(var uParam0)
{
  if (MISC::_IS_IN_POWER_SAVING_MODE())
  {
    *uParam0 = MISC::_GET_POWER_SAVING_MODE_DURATION();
  }
  else
  {
    *uParam0 = -1;
  }
  return *uParam0;
}