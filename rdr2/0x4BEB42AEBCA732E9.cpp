// discoverable_generic_location.ysc @ L14536
bool func_212(var uParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
  iVar1 = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
  if (func_274(uParam0, &iVar0))
  {
    return true;
  }
  return false;
}